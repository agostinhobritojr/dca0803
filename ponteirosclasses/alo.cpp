#include "alo.h"
#include <iostream>
/*
Alo::Alo(){
  std::cout << "construtor padrao\n";
}
*/

Alo::Alo(int _x){
  x = _x;
  std::cout << "construtor alo\n";
}

Alo::~Alo(){
  std::cout << "destrutor\n";
}

void Alo::print(){
  std::cout << "print: endereco = " << this << "\n";
}

