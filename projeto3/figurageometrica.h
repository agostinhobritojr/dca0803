#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.hpp"

class FiguraGeometrica{
protected:
  float r, g, b, a;
public:
  FiguraGeometrica(){};
  virtual void draw(Sculptor &s)=0;
  virtual ~FiguraGeometrica(){}
};


#endif // FIGURAGEOMETRICA_H
