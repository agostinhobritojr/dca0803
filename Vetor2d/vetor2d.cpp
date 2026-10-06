#include "vetor2d.h"
#include <iostream>
#include <cmath>

void Vetor2d::setX(float x_){
  x = x_;
}

float Vetor2d::getX(void){
  return x;
}
void Vetor2d::setY(float y_){
  y = y_;
}
float Vetor2d::getY(void){
  return y;
}
void Vetor2d::print(void){
  std::cout << "(" << x << "," << y << ")";
}
float Vetor2d::norma(void){
  return std::sqrt(x*x+y*y);
}
Vetor2d Vetor2d::unitario(void){
  Vetor2d retorno;
  retorno.x = x/norma();
  retorno.y = y/norma();
  return retorno;
}
float Vetor2d::angulo(){
  return atan2(y, x) * 180/M_PI;
}

Vetor2d Vetor2d::produto(float a){
  Vetor2d ret;
  ret.x = x * a;
  ret.y = y * a;
  return ret;
}

float Vetor2d::produto(Vetor2d v2){
  float ret;
  ret = x*v2.x + y*v2.y;
  return ret;
}







