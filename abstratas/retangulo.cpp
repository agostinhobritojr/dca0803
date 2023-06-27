#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(float x0, float y0, float l, float h){
    this->x0 = x0;
    this->y0 = y0;
    this->l = l;
    this->h = h;
}

void Retangulo::draw(){
    std::cout << "draw Retangulo\n";
}
