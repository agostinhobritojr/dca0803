#include "vetor2d.h"
#include <iostream>
#include <cmath>

// metodo setX no escopo da
// classe Vetor2d
void Vetor2d::setX(float x_){
  x = x_;
}

float Vetor2d::getX(){
  return x;
}

void Vetor2d::print(){
  std::cout << "(" << x << "," << y << ")";
}

void Vetor2d::setY(float y_){
  y = y_;
}

float Vetor2d::getY(){
  return y;
}

float Vetor2d::tamanho(void){
  return std::sqrt(x*x + y*y);
}
