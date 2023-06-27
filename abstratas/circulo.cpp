#include "circulo.h"
#include <iostream>

Circulo::Circulo(float x0, float y0, float raio){
    this->x0 = x0; this->y0 = y0; this->raio = raio;
}

void Circulo::draw(){
    std::cout << "draw Circulo(";
    std::cout << x0 << "," << y0 << " - ";
    std::cout << raio << ")\n";
}
