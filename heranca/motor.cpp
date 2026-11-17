#include "motor.h"
#include <iostream>

Motor::Motor(){
  std::cout << "Construtor Motor\n";
}

Motor::~Motor(){
  std::cout << "Destrutor Motor\n";
}

void Motor::setPotencia(float _potencia){
  potencia=_potencia;
  // propriedades privadas da superclasse somente podem
  // ser alteradas pelos metodos da superclasse
  // a heranca nao da o direito de modifica-los diretamente
  //  preco = -200;
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
