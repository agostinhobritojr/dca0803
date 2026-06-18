#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(int x0, int y0, int larg, int alt) {
    this->x0 = x0;
    this->y0 = y0;
    this->larg = larg;
    this->alt = alt;
}

void Retangulo::draw(){
    std::cout << "draw Retangulo(";
    std::cout << x0 << "," << y0 << ") [] (";
    std::cout << larg << "," << alt << ")\n";
}
