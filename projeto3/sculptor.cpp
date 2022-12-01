#include "sculptor.hpp"

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <queue>
#include <vector>

void troca(int &x, int &y) {
  int tmp;
  tmp = x;
  x = y;
  y = tmp;
}

Sculptor::Sculptor(int _nx, int _ny, int _nz) {
  int i;

  nx = _nx;
  ny = _ny;
  nz = _nz;
  r = g = b = a = 0.5;

  v = new Voxel **[nx];
  if (v == nullptr) {
    std::cout << "alloc error\n";
    exit(0);
  }

  v[0] = new Voxel *[nx * ny];
  if (v[0] == nullptr) {
    std::cout << "alloc error\n";
    exit(0);
  }

  v[0][0] = new Voxel[nx * ny * nz];
  if (v[0][0] == nullptr) {
    std::cout << "aalloc error\n";
    exit(0);
  }

  // Ajusta os ponteiros para as linhas
  // cada plano pula de nl em nl linhas
  for (i = 1; i < nx; i++) {
    v[i] = v[i - 1] + ny;
  }

  // ajusta os ponteiros para as colunas
  // cada linha pula de nc em nc colunas
  for (i = 1; i < nx * ny; i++) {
    v[0][i] = v[0][i - 1] + nz;
  }
}

Sculptor::~Sculptor() {
  delete[] v[0][0];
  delete[] v[0];
  delete[] v;
}

void Sculptor::setColor(float r, float g, float b, float alpha) {
  this->r = r;
  this->g = g;
  this->b = b;
  a = alpha;
}

void Sculptor::cutVoxel(int x0, int y0, int z0) {
  if (x0 >= 0 && x0 < nx && y0 >= 0 && y0 < ny && z0 >= 0 && z0 < nz) {
    v[x0][y0][z0].show = false;
  }
}

void Sculptor::putVoxel(int x0, int y0, int z0) {
  if (x0 >= 0 && x0 < nx && y0 >= 0 && y0 < ny && z0 >= 0 && z0 < nz) {
    v[x0][y0][z0].show = true;
    v[x0][y0][z0].r = r;
    v[x0][y0][z0].g = g;
    v[x0][y0][z0].b = b;
    v[x0][y0][z0].a = a;
  }
}

void Sculptor::putSphere(int x0, int y0, int z0, int rr) {
  double r2;
  int x, y, z;

  r2 = (double)rr * (double)rr;
  for (x = 0; x < nx; x++) {
    for (y = 0; y < ny; y++) {
      for (z = 0; z < nz; z++) {
        if ((double)(x - x0) * (double)(x - x0) +
                (double)(y - y0) * (double)(y - y0) +
                (double)(z - z0) * (double)(z - z0) <
            r2) {
          putVoxel(x, y, z);
        }
      }
    }
  }
}

void Sculptor::cutSphere(int x0, int y0, int z0, int rr) {
  double r2;
  int x, y, z;

  r2 = (double)rr * (double)rr;
  for (x = 0; x < nx; x++) {
    for (y = 0; y < ny; y++) {
      for (z = 0; z < nz; z++) {
        if ((double)(x - x0) * (double)(x - x0) +
                (double)(y - y0) * (double)(y - y0) +
                (double)(z - z0) * (double)(z - z0) <
            r2) {
          cutVoxel(x, y, z);
        }
      }
    }
  }
}

void Sculptor::putEllipsoid(int x0, int y0, int z0, int rx, int ry, int rz) {
  double dx, dy, dz;
  int x, y, z;

  for (x = 0; x < nx; x++) {
    for (y = 0; y < ny; y++) {
      for (z = 0; z < nz; z++) {
        dx = (double)(x - x0) * (double)(x - x0);
        dy = (double)(y - y0) * (double)(y - y0);
        dz = (double)(z - z0) * (double)(z - z0);
        // ponto dentro do elipsoide
        if (dx / (rx * rx) + dy / (ry * ry) + dz / (rz * rz) < 1) {
          putVoxel(x, y, z);
        }
      }
    }
  }
}

void Sculptor::cutEllipsoid(int x0, int y0, int z0, int rx, int ry, int rz) {
  double dx, dy, dz;
  int x, y, z;

  for (x = 0; x < nx; x++) {
    for (y = 0; y < ny; y++) {
      for (z = 0; z < nz; z++) {
        dx = (double)(x - x0) * (double)(x - x0);
        dy = (double)(y - y0) * (double)(y - y0);
        dz = (double)(z - z0) * (double)(z - z0);
        // ponto dentro do elipsoide
        if (dx / (rx * rx) + dy / (ry * ry) + dz / (rz * rz) < 1) {
          cutVoxel(x, y, z);
        }
      }
    }
  }
}

void Sculptor::writeOFF(const char *filename) {
  int total, index, x, y, z;

  std::ofstream f;
  total = 0;
  f.open(filename);
  f << "OFF\n";
  // conta a quantidade de voxels ativos
  for (x = 0; x < nx; x++) {
    for (y = 0; y < ny; y++) {
      for (z = 0; z < nz; z++) {
        if (v[x][y][z].show == true) {
          total++;
        }
      }
    }
  }
  // escreve no de vertices e faces (0 arestas! nao usado)
  f << total * 8 << " " << total * 6 << " 0 \n";
  for (x = 0; x < nx; x++) {
    for (y = 0; y < ny; y++) {
      for (z = 0; z < nz; z++) {
        if (v[x][y][z].show == true) {
          // escreve os vertices do cubo
          f << x - 0.5 << " " << y + 0.5 << " " << z - 0.5 << "\n";  // 0
          f << x - 0.5 << " " << y - 0.5 << " " << z - 0.5 << "\n";  // 1
          f << x + 0.5 << " " << y - 0.5 << " " << z - 0.5 << "\n";  // 2
          f << x + 0.5 << " " << y + 0.5 << " " << z - 0.5 << "\n";  // 3
          f << x - 0.5 << " " << y + 0.5 << " " << z + 0.5 << "\n";  // 4
          f << x - 0.5 << " " << y - 0.5 << " " << z + 0.5 << "\n";  // 5
          f << x + 0.5 << " " << y - 0.5 << " " << z + 0.5 << "\n";  // 6
          f << x + 0.5 << " " << y + 0.5 << " " << z + 0.5 << "\n";  // 7
        }
      }
    }
  }
  total = 0;
  // escreve os indices das faces
  // pulando vertices de 8 em 8
  for (x = 0; x < nx; x++) {
    for (y = 0; y < ny; y++) {
      for (z = 0; z < nz; z++) {
        if (v[x][y][z].show == true) {
          index = total * 8;
          // face 0
          f << std::fixed;
          f << std::setprecision(2);
          f << 4 << " " << index + 0 << " " << index + 3 << " " << index + 2
            << " " << index + 1 << " ";
          f << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " "
            << v[x][y][z].a << "\n";
          // face 1
          f << 4 << " " << index + 4 << " " << index + 5 << " " << index + 6
            << " " << index + 7 << " ";
          f << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " "
            << v[x][y][z].a << "\n";
          // face 2
          f << 4 << " " << index + 0 << " " << index + 1 << " " << index + 5
            << " " << index + 4 << " ";
          f << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " "
            << v[x][y][z].a << "\n";
          // face 3
          f << 4 << " " << index + 0 << " " << index + 4 << " " << index + 7
            << " " << index + 3 << " ";
          f << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " "
            << v[x][y][z].a << "\n";
          // face 4
          f << 4 << " " << index + 3 << " " << index + 7 << " " << index + 6
            << " " << index + 2 << " ";
          f << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " "
            << v[x][y][z].a << "\n";
          // face 5
          f << 4 << " " << index + 1 << " " << index + 2 << " " << index + 6
            << " " << index + 5 << " ";
          f << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " "
            << v[x][y][z].a << "\n";
          // incrementa total de cubos
          total++;
        }
      }
    }
  }
  f.close();
}
