#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica{
    float x1, y1, x2, y2;
public:
    Reta(float x1, float y1, float x2, float y2);
    ~Reta();
    void draw();
};

#endif // RETA_H
