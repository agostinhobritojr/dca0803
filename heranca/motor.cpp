#include "motor.h"
#include <iostream>

Motor::Motor(){
    std::cout << "Construtor Default Motor\n";
}
// escolha dos construtor da superclasse
Motor::Motor(float _potencia) : Equipamento(100*_potencia){
    std::cout << "Construtor Argumentos Motor\n";
    potencia = _potencia;
}

Motor::~Motor(){
    std::cout << "Destrutor Motor\n";
}

void Motor::operator=(Equipamento &e){
    setNome(e.getNome());
    setFabricante(e.getFabricante());
    preco = e.getPreco();
    potencia = 100;
    velocidade = 100;
}

void Motor::setPotencia(float _potencia){
  //  preco = 20;
    potencia=_potencia;
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
