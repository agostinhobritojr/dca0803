#include "circulo.h"
#include <iostream>

Circulo::Circulo(){

}

Circulo::~Circulo()
{
  std::cout << "destrutor circulo\n";
}

void Circulo::draw()
{
  std::cout << "draw Circulo\n";
}

