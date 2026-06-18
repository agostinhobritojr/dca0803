#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
    int x0, y0, larg, alt;
public:
    Retangulo(int x0, int y0, int larg, int alt);
    void draw();
};

#endif // RETANGULO_H
