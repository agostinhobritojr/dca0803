#include "vetor2d.h"
#include <iostream>
#include <cmath> // para as funcoes matematicas

// metodo setX no escopo da classe
// Vetor2d
/*Vetor2d::Vetor2d(){
    std::cout << "Chamou o construtor padrao\n";
    x = y = 1;
}*/
Vetor2d::Vetor2d(int x_, int y_){
    std::cout << "Chamou o construtor com argumentos\n";
    x = x_; y = y_;
}

Vetor2d::Vetor2d(const Vetor2d &v){
    std::cout << "Chamou o construtor de copia\n";
    x = v.x; y = v.y;
}

Vetor2d::~Vetor2d(){
    std::cout << "Chamou o destrutor\n";
}

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

float Vetor2d::norma(){
    return std::sqrt(x*x+y*y);
}

float Vetor2d::teta(){
    return std::atan2(y,x);
}

void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ")";
}

Vetor2d Vetor2d::soma(Vetor2d v){
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
}

Vetor2d Vetor2d::subtrai(Vetor2d v){
    Vetor2d ret;
    ret.x = x - v.x;
    ret.y = y - v.y;
    return ret;
}

Vetor2d Vetor2d::mult(float a){
    Vetor2d ret;
    ret.x = a*x;
    ret.y = a*y;
    return ret;
}

float Vetor2d::mult(Vetor2d v){
    float ret;
    ret = x*v.x+y*v.y;
    return ret;
}

