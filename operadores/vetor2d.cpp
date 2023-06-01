#include "vetor2d.h"
#include <iostream>

Vetor2d::Vetor2d(float mx, float my){
    x = mx; y = my;
}

Vetor2d Vetor2d::soma(Vetor2d v){
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
}

Vetor2d Vetor2d::operator+(Vetor2d v){
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
}

void Vetor2d::print(){
    std::cout << "("  << x << "," << y << ")\n";
}
