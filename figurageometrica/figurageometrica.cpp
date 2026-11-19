#include "figurageometrica.h"
#include <iostream>

FiguraGeometrica::FiguraGeometrica() { }

void FiguraGeometrica::setPos(float x, float y){
  this->x = x;
  this->y = y;
}

void FiguraGeometrica::draw(){
  std::cout << "draw FiguraGeometrica (";
  std::cout << x << "," << y << ")\n";
}
