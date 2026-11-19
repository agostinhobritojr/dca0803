#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica{
  private:
  float xfinal, yfinal;
  public:
  Reta(float x1, float y1, float x2, float y2);
  void draw();
  void print();
};

#endif // RETA_H
