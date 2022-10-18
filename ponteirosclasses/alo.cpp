#include "alo.h"
#include <iostream>

Alo::Alo(){
  x = 10;
  std::cout << "construtor alo\n";
}

void Alo::print(){
  std::cout << "print: endereco = " << this << "\n";
}

