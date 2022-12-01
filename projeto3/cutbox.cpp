#include "cutbox.h"

CutBox::CutBox(int x0, int x1, int y0, int y1, int z0,
               int z1){
  this->x0 = x0; this->x1 = x1;
  this->y0 = y0; this->y1 = y1;
  this->z0 = z0; this->z1 = z1;
}

void CutBox::draw(Sculptor &s){
  int x, y, z;
  for (x = x0; x <= x1; x++) {
    for (y = y0; y <= y1; y++) {
      for (z = z0; z <= z1; z++) {
        s.cutVoxel(x, y, z);
      }
    }
  }
}
