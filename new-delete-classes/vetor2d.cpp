#include "vetor2d.h"
#include <iostream>

//Vetor2d::Vetor2d(){
//    std::cout << "construtor default\n";
//    x = 0; y = 0;
//}

Vetor2d::Vetor2d(float x_, float y_){
    std::cout << "construtor argumentos\n";
    x = x_; y = y_;
}

void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ")\n";
}
