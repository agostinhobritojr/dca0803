#include "vetor2d.h"
#include <iostream>
#include <math.h>

/*
Vetor2d::Vetor2d(){
    std::cout << "Construtor padrao\n";
    x = y = 0;
}
*/

Vetor2d::Vetor2d(float x_, float y_){
    std::cout << "Construtor com argumentos\n";
    x = x_;
    y = y_;
}

Vetor2d::~Vetor2d(){
    std::cout << "Destrutor\n";
}

void Vetor2d::setX(float x_){
    x = x_;
}
float Vetor2d::getX(void){
    return x;
}
void Vetor2d::setY(float y_){
    y = y_;
}
float Vetor2d::getY(){
    return y;
}
void Vetor2d::print(){
    std::cout << "(" << x << "," <<
        y << ")" << std::endl;
}
float Vetor2d::norma(){
    return sqrt(x*x+y*y);
}
float Vetor2d::angulo(){
    return atan2f(y, x);
}
Vetor2d Vetor2d::unitario(){
    Vetor2d unit;
    unit.x = x / norma();
    unit.y = y / norma();
    return unit;
}
