#include "vetor2d.h"
#include <iostream>
#include <cmath>

/*Vetor2d::Vetor2d(){
  std::cout << "construtor default\n";
  x = y = 0.0;
}*/

Vetor2d::Vetor2d(float x_, float y_){
  std::cout << "construtor c/args \n";
  x = x_; y = y_;
}

Vetor2d::Vetor2d(const Vetor2d &v){
  std::cout << "construtor copia \n";
  x = v.x; y = v.y;
}

Vetor2d::~Vetor2d(){
  std::cout << "destrutor\n";
}

// metodo setX() no ESCOPO da classe Vetor2d
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

void Vetor2d::setZero(){
  x = y = 0;
}

void Vetor2d::print(){
  std::cout << "(" << x << "," << y << ")";
}

float Vetor2d::norma(){
  return std::sqrt(x*x+y*y);
}

float Vetor2d::angulo(){
  return std::atan2(y,x)*180/3.14;
}

Vetor2d Vetor2d::soma(Vetor2d v2){
  Vetor2d ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}

Vetor2d Vetor2d::operator +(Vetor2d v2){
  Vetor2d ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}

Vetor2d Vetor2d::operator*(float a){
  Vetor2d ret;
  ret.x = x*a;
  ret.y = y*a;
  return ret;
}

float Vetor2d::operator*(Vetor2d v2){
  float ret;
  ret = x*v2.x + y*v2.y;
  return ret;
}

Vetor2d Vetor2d::subtracao(Vetor2d v2){
  Vetor2d ret;
  ret.x = x - v2.x;
  ret.y = y - v2.y;
  return ret;
}

float Vetor2d::produto(Vetor2d v2){
  float ret;
  ret = x*v2.x + y*v2.y;
  return ret;
}

Vetor2d Vetor2d::produto(float a){
  Vetor2d ret;
  ret.x = x*a;
  ret.y = y*a;
  return ret;
}

void Vetor2d::teste1(int a, float b){
  std::cout << "teste1-a\n";
}

void Vetor2d::teste1(float a, int b)
{
  std::cout << "teste1-b\n";
}

Vetor2d operator*(float a, Vetor2d v){
  Vetor2d ret;
  ret.setX(a*v.getX());
  ret.setY(a*v.getY());
  return ret;
}








