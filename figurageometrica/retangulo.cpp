#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(float x1, float y1, float largura, float altura) {
  x = x1;
  y = y1;
  this->altura = altura;
  this->largura = largura;
}

void Retangulo::draw(){
  std::cout << "draw Retangulo (";
  std::cout << x << "," << y << "):[";
  std::cout << largura << "x" << altura << "]\n";
}