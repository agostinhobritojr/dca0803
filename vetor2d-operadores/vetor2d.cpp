#include "vetor2d.h"
#include <iostream>
#include <cmath>

Vetor2d::Vetor2d(){
    x = y = 0;

}

Vetor2d::Vetor2d(float x_, float y_){
    x = x_; y = y_;

}

Vetor2d::~Vetor2d(){

}

Vetor2d::Vetor2d(const Vetor2d &v_){
    x = v_.x; y = v_.y;

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
void Vetor2d::print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Vetor2d Vetor2d::soma(Vetor2d v1){
    Vetor2d ret;
    ret.x = x + v1.x;
    ret.y = y + v1.y;
    return ret;
}

Vetor2d Vetor2d::operator +(Vetor2d v1){
    Vetor2d ret;
    ret.x = x + v1.x;
    ret.y = y + v1.y;
    return ret;
}

//Vetor2d Vetor2d::operator =(Vetor2d &v1){
//    x = v1.x;
//    y = v1.y;
//    return *this;
//}

Vetor2d Vetor2d::operator ++(){
    x++; y++;
    return *this;
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

Vetor2d Vetor2d::operator*(float a){
    Vetor2d ret;
    ret.x = a *x;
    ret.y = a *y;
    return ret;
}

float Vetor2d::operator*(Vetor2d v){
    float ret;
    ret = x * v.x + y * v.y;
    return ret;
}

Vetor2d operator*(float a, Vetor2d v){
    Vetor2d ret;
    ret.x = a * v.x;
    ret.y = a * v.y;
    return ret;
}


std::ostream& operator << (std::ostream &os, Vetor2d v){
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}


Vetor2d& Vetor2d::operator=(const Vetor2d& outro){
    std::cout << "atribuicao de copia\n";
    if (this != &outro) {
        x = outro.x;
        y = outro.y;
    }
    return *this;
}

Vetor2d& Vetor2d::operator=(const Vetor2d&& outro){
    std::cout << "atribuicao de movimentacao\n";
    if (this != &outro) {
        x = outro.x;
        y = outro.y;
    }
    return *this;
}







