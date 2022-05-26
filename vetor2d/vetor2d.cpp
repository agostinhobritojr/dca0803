#include "vetor2d.h"
#include <iostream>
#include <cmath>

// metodo setX no escopo da
// classe Vetor2d
/*Vetor2d::Vetor2d(){
  x = y = 0;
  std::cout << "construtor padrao\n";
}*/

Vetor2d::Vetor2d(int x_, int y_){
  x = x_; y = y_;
  std::cout << "construtor com argumentos\n";
}

Vetor2d::Vetor2d(Vetor2d &v){
  x = v.x; y = v.y;
  std::cout << "construtor de copia\n";
}

Vetor2d::~Vetor2d(){
  std::cout << "destrutor\n";
}

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

float Vetor2d::angulo(){
  return std::atan2(y,x);
}

Vetor2d Vetor2d::soma(Vetor2d v){
  Vetor2d ret;
  ret.x = x + v.x;
  ret.y = y + v.y;
  return ret;
}

Vetor2d Vetor2d::subtracao(Vetor2d v){
  Vetor2d ret;
  ret.x = x - v.x;
  ret.y = y - v.y;
  return ret;
}

float Vetor2d::produto(Vetor2d v){
  float ret;
  ret = x*v.x+y*v.y;
  return ret;
}

Vetor2d Vetor2d::produto(float a){
  Vetor2d ret;
  ret.x = x*a;
  ret.y = y*a;
  return ret;
}




