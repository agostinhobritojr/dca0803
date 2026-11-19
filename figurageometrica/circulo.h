#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
  float raio;
  public:
  Circulo(float centrox, float centroy, float raio);
  void draw();
};

#endif // CIRCULO_H
