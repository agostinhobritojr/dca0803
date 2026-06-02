#include "motor.h"
#include <iostream>

// escolhe o construtor e passa o valor desejado
Motor::Motor(float potencia) :
    Equipamento(20*potencia)
{
    this->potencia = potencia;
    std::cout << "construtor motor\n";
}

Motor::~Motor(){
    std::cout << "destrutor motor\n";
}

void Motor::setPreco(float preco_){
    preco = preco_;
    potencia = preco/20;
}

void Motor::setPotencia(float _potencia){
    potencia=_potencia;
//    setPreco(20*potencia);
    preco = 20 * potencia;
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
