#include "reta.h"
#include <iostream>

Reta::Reta(float x1, float y1, float x2, float y2) {
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}

Reta::~Reta(){
//    std::cout << "destrutor Reta\n";
}

void Reta::draw(){
    std::cout << "Reta: (" << x1 << "," << y1 << ")";
    std::cout << "->(" << x2 << "," << y2 << ")\n";
}




