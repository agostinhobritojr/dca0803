#include "reta.h"
#include <iostream>

Reta::Reta(float x0, float y0, float x1, float y1){
    this->x0 = x0;
    this->y0 = y0;
    this->x1 = x1;
    this->y1 = y1;
}

void Reta::draw(){
    std::cout << "draw Reta\n";
}
