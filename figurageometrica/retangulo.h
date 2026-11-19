#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
  float largura, altura;
  public:
  Retangulo(float x1, float y1, float largura, float altura);
  void draw();
};

#endif // RETANGULO_H
