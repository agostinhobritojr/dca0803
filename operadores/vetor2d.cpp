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
    x = x_;
    y = y_;
}

Vetor2d::Vetor2d(const Vetor2d &v1){
    x = v1.x;
    y = v1.y;
}

Vetor2d::~Vetor2d(){
}

void Vetor2d::setX(float x){
    this->x = x;
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
//    std::cout << "Alo, maria!\n";
}

void Vetor2d::meuEndereco(){
    std::cout << "meu endereco = " << this << std::endl;
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

float Vetor2d::produto(Vetor2d v1){
    float result;
    result = x*v1.x + y*v1.y;
    return result;
}

Vetor2d Vetor2d::produto(float a){
    Vetor2d ret;
    ret.x = a *x;
    ret.y = a *y;
    return ret;
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

Vetor2d Vetor2d::operator *(float a){
    Vetor2d ret;
    ret.x = x * a;
    ret.y = y * a;
    return ret;
}

float Vetor2d::operator * (Vetor2d v1){
    float ret;
    ret = x*v1.x + y*v1.y;
    return ret;
}

Vetor2d operator*(float a, Vetor2d v1){
    Vetor2d ret;
    ret.x = a * v1.x;
    ret.y = a * v1.y;
 //   ret.setX(a * v1.getX());
 //   ret.setY(a * v1.getY());
    return ret;
}

std::ostream& operator << (std::ostream &os,
                Vetor2d v1){
    os << "(" << v1.x << "," << v1.y << ")";
    return os;
}






