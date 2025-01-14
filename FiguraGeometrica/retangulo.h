#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
    float x1, y1, largura, altura;
public:
    Retangulo(float x1, float y1, float largura,
              float altura);
    void draw();
    void alo(){};
};

#endif // RETANGULO_H
