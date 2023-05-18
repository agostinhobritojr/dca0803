#include "vetor2d.h"
#include <iostream>

Vetor2d::Vetor2d(float x_, float y_){
    std::cout << "construtor da classe\n";
    x = x_; y = y_;
}

void Vetor2d::print(){
//    std::cout << "(" << x << "," << y << ")\n";
    std::cout << "chamou print 1\n";
    std::cout << this;
    std::cout << "chamou print 2\n";
}
