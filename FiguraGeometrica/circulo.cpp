#include "circulo.h"
#include <iostream>

Circulo::Circulo(float xc, float yc, float raio) {
    this->xc = xc;
    this->yc = yc;
    this->raio = raio;
}

void Circulo::draw()
{
    std::cout << "Circulo: (" << xc << "," << yc;
    std::cout << "):" << raio << "\n";
}
