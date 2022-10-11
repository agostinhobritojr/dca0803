#include "vetor2d.h"
#include <iostream>
#include <cmath>

// metodo setX() no ESCOPO da classe Vetor2d
void Vetor2d::setX(float x_){
  x = x_;
}
float Vetor2d::getX(){
  return x;
}
void Vetor2d::setY(float y_){
  y = y_;
}
float Vetor2d::getY(){
  return y;
}

void Vetor2d::setZero(){
  x = y = 0;
}

void Vetor2d::print(){
  std::cout << "(" << x << "," << y << ")";
}
float Vetor2d::norma(){
  return std::sqrt(x*x+y*y);
}
float Vetor2d::angulo(){
  return std::atan2(y,x)*180/3.14;
}

Vetor2d Vetor2d::soma(Vetor2d v2){
  Vetor2d ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}







