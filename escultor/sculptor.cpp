#include "sculptor.h"

#include <fstream>

Sculptor::Sculptor(int _nx, int _ny, int _nz) {
  nx = _nx;
  ny = _ny;
  nz = _nz;
  // alocar a matriz 3d "v"
}

Sculptor::~Sculptor() {}

void Sculptor::setColor(float r, float g, float b, float alpha) {}

void Sculptor::putVoxel(int x, int y, int z) {}

void Sculptor::cutVoxel(int x, int y, int z) {}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1) {}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1) {}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius) {}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius) {}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx,

                            int ry, int rz) {}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx,
                            int ry, int rz) {}
void Sculptor::writeOFF(const char* filename) {
  std::ofstream fout;
  int nvertices = 0, nfaces = 0, nvoxels = 0;
  fout.open(filename);

  if (!fout.is_open()) {
    exit(1);
  }
  // laco triplo para contar os
  // voxels ativos marcados com show = true

  nvoxels = 30;

  nvertices = 8 * nvoxels;
  nfaces = 6 * nvoxels;

  fout << "OFF\n";
  fout << nvertices << " " << nfaces << " 0\n";
  fout.close();
}