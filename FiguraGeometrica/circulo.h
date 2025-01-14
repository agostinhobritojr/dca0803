#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
    float xc, yc, raio;
public:
    Circulo(float xc, float yc, float raio);
    void draw();
};

#endif // CIRCULO_H
