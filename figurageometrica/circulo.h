#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
    int x, y, raio;
public:
    Circulo(int x, int y, int raio);
    void draw();
};

#endif // CIRCULO_H
