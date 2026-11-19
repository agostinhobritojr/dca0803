#include "circulo.h"
#include <iostream>

Circulo::Circulo(float centrox, float centroy, float raio) {
  x = centrox;
  y = centroy;
  this->raio = raio;
}

void Circulo::draw(){
  std::cout << "draw Circulo (";
  std::cout << x << "," << y << "):r(";
  std::cout << raio << ")\n";
}