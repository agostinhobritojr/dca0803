#include "vetor2d.h"
#include <iostream>
#include <cmath>

// :: - operador de ESCOPO
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
    std::cout << "(" << x << "," << y << ")\n";
}
float Vetor2d::norma(){
    return std::sqrt(x*x+y*y);
}
float Vetor2d::angulo(){
    return 180/3.1415*std::atan2(y,x);
}
Vetor2d Vetor2d::unitario(void){
    Vetor2d ret;
    ret.x = x/norma();
    ret.y = y/norma();
    return ret;
}

Vetor2d Vetor2d::soma(Vetor2d v){
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
}







