#include "motor.h"
#include <iostream>
/*
Motor::Motor(){
    std::cout << "Construtor Motor\n";
}
*/
// escolhendo o construtor da superclasse
// o ":" abre a lista de inicializadores, INCLUSIVE
// de variaveis, se o programador desejar
Motor::Motor() : Equipamento(35), potencia(100){
    //potencia = 100;
    std::cout << "Construtor Motor\n";
}


Motor::~Motor(){
    std::cout << "Destrutor Motor\n";
}

void Motor::setPotencia(float _potencia){
    potencia=_potencia;
    preco = 10*potencia;
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
