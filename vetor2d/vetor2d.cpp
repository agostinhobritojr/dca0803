#include "vetor2d.h"
#include <iostream>

Vetor2d::Vetor2d(){
    // construtor default
    std::cout << "construtor padrao\n";
    x = 0;
    y = 0;
}

Vetor2d::Vetor2d(float x_, float y_){
    std::cout << "construtor com argumentos\n";
    x = x_;
    y = y_;
}

Vetor2d::~Vetor2d(){
    std::cout << "destrutor\n";
}

void Vetor2d::alo(){

}

Vetor2d Vetor2d::produto(float a){
    Vetor2d retorno;
    retorno.x = a * x;
    retorno.y = a * y;
    return retorno;
}


void Vetor2d::setX(float x_){
    // caso deseje limitar os valores para x>=0
    if(x_ >= 0){
        x = x_;
    }
}
void Vetor2d::setY(float y_){
    y = y_;
}
float Vetor2d::getX(){
    return x;
}
float Vetor2d::getY(){
    return y;
}
void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ") "
                                         "";
}






