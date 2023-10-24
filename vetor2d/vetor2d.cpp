#include "vetor2d.h"
#include <iostream>
#include <cmath>

// :: - operador de ESCOPO
//Vetor2d::Vetor2d(){
//    std::cout << "Construtor default\n";
//    x = y = 0;
//}

Vetor2d::Vetor2d(float x_, float y_){
 //   std::cout << "Construtor com argumentos\n";
    x = x_; y = y_;
}

Vetor2d::Vetor2d(const Vetor2d &v){
//    std::cout << "Construtor de copia\n";
    x = v.x;
    y = v.y;
}

Vetor2d::~Vetor2d(){
 //   std::cout << "Destrutor\n";
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

Vetor2d Vetor2d::subtracao(Vetor2d v){
    Vetor2d ret;
    ret.x = x - v.x;
    ret.y = y - v.y;
    return ret;
}

Vetor2d Vetor2d::produto(float a){
    Vetor2d ret;
    ret.x = x*a;
    ret.y = y*a;
    return ret;

}

float Vetor2d::produto(Vetor2d v){
    float ret;
    ret = x*v.x + y*v.y;
    return ret;
}

Vetor2d Vetor2d::operator + (Vetor2d v){
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
}

Vetor2d Vetor2d::operator -(Vetor2d v){
    Vetor2d ret;
    ret.x = x - v.x;
    ret.y = y - v.y;
    return ret;
}

float Vetor2d::operator *(Vetor2d v){
    return x*v.x + y*v.y;
}

Vetor2d Vetor2d::operator *(float  a){
    Vetor2d ret;
    ret.x = x*a;
    ret.y = y*a;
    return ret;
}

Vetor2d operator*(float a, Vetor2d v1){
    Vetor2d ret;
//    ret.setX(a*v1.getX());
//    ret.setY(a*v1.getY());
    ret.x = a * v1.x;
    ret.y = a * v1.y;
    return ret;
}

std::ostream&  operator << (std::ostream & s, Vetor2d v){
    s << "(" << v.x << "," << v.y << ")";
    return s;
}





