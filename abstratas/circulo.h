#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
    float x0, y0, raio;
public:
    Circulo(float x0, float y0, float raio);
    void draw();
};

#endif // CIRCULO_H
