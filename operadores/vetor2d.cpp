#include "vetor2d.h"
#include <iostream>

Vetor2d::Vetor2d(){
    // construtor default
    x = 0;
    y = 0;
}

Vetor2d::Vetor2d(float x_, float y_){
   x = x_;
    y = y_;
}

Vetor2d::~Vetor2d(){

}

void Vetor2d::alo(){

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

Vetor2d Vetor2d::soma(Vetor2d v){
    Vetor2d ret;
    ret.x = x+v.x;
    ret.y = y+v.y;
    return ret;
}

Vetor2d Vetor2d::operator + (Vetor2d v){
    Vetor2d ret;
    ret.x = x+v.x;
    ret.y = y+v.y;
    return ret;
}

Vetor2d Vetor2d::operator -(Vetor2d v){
    Vetor2d ret;
    ret.x = x-v.x;
    ret.y = y-v.y;
    return ret;
}

Vetor2d Vetor2d::operator *(float a)
{
    Vetor2d ret;
    ret.x = a*x;
    ret.y = a*y;
    return ret;
}

Vetor2d operator*(float a, Vetor2d v){
    Vetor2d ret;
    ret.setX(a*v.getX());
    ret.setY(a*v.getY());
    return ret;
}



bool Vetor2d::operator ==(Vetor2d v)
{
    if(x == v.x && y == v.y){
        return true;
    }
    return false;
}

float Vetor2d::operator *(Vetor2d v){
    float ret;
    ret = x*v.x + y*v.y;
    return ret;
}




