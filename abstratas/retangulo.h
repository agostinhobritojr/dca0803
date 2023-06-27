#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
    float x0, y0, l, h;
public:
    Retangulo(float x0, float y0, float l, float h);
    void draw();
};

#endif // RETANGULO_H
