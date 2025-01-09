#include "motor.h"
#include <iostream>

//Motor::Motor(float a) : Equipamento(a){

Motor::Motor() : Equipamento(20){
    std::cout << "construtor Motor\n";
}

Motor::~Motor()
{
    std::cout << "destrutor Motor\n";
}

void Motor::setPotencia(float _potencia){
    potencia=_potencia;
    //setPreco(potencia * 20);
    preco = potencia * 200;
}

void Motor::setVelocidade(float _velocidade){
    velocidade=_velocidade;
}

float Motor::getPotencia(void){
    return potencia;
}

float Motor::getVelocidade(void){
    return velocidade;
}
