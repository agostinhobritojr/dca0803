#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(float x1, float y1,
                     float largura, float altura) {
    this->x1 = x1;
    this->y1 = y1;
    this->largura = largura;
    this->altura = altura;
}

void Retangulo::draw(){
    std::cout << "Retangulo: (" << x1 << ",";
    std::cout << y1 << "):" << largura << "x";
    std::cout << altura << "\n";
}
