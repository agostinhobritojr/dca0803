#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica{
    float x0, y0, x1, y1;
public:
    Reta(float x0, float y0, float x1, float y1);
    void draw();
};

#endif // RETA_H
