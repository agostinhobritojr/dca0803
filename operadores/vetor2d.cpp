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

Vetor2d Vetor2d::operator-(Vetor2d v){
    Vetor2d ret;
    ret.x = x - v.x;
    ret.y = y - v.y;
    return ret;
}

Vetor2d Vetor2d::operator*(float a){
    Vetor2d ret;
    ret.x = x*a;
    ret.y = y*a;
    return ret;
}

float Vetor2d::operator*(Vetor2d v){
    float ret;
    ret = x*v.x + y*v.y;
    return ret;
}

void Vetor2d::print(){
    std::cout << "("  << x << "," << y << ")\n";
}

// Vetor2d v1, v2;
// v2 = 4*v1;
// v2 = operator*(4,v1);
Vetor2d operator*(float a, Vetor2d v){
    Vetor2d ret;
    ret.x = a*v.x;
    ret.y = a*v.y;
    return ret;
}







