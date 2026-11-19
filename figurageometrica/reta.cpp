#include "reta.h"
#include <iostream>

Reta::Reta(float x1, float y1, float x2, float y2){
  x = x1;
  y = y1;
  xfinal = x2;
  yfinal = y2;
}

void Reta::draw(){
  std::cout << "draw Reta (";
  std::cout << x << "," << y << ")--(";
  std::cout << xfinal << "," << yfinal << ")\n";
}

void Reta::print(){
  std::cout << "print reta\n";
}






