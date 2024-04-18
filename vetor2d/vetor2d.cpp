#include "vetor2d.h"
#include <iostream>
#include <cmath>

void Vetor2d::setX(float x_){
    x = x_;
}
float Vetor2d::getX(){
    return x;
}
void Vetor2d::setY(float y_){
    y = y_;
}
float Vetor2d::getY(){
    return y;
}
void Vetor2d::print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}
float Vetor2d::norma(){
    return std::sqrt(x*x + y*y);
}
float Vetor2d::angulo(){
    return std::atan2(y, x)*180/M_PI;
}

Vetor2d Vetor2d::produto(float a){
    Vetor2d ret;
    ret.x = a *x;
    ret.y = a *y;
    return ret;
}

float Vetor2d::produto(Vetor2d v){
    float ret;
    ret = x * v.x + y * v.y;
    return ret;
}







