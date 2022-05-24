#include <iostream>
#include <cmath>
#include "vetor2d.h"

int main(void){
  Vetor2d v;
  float tam;

  v.setX(3); v.setY(4);

  tam = v.tamanho();

  std::cout << "tamanho = " << tam << "\n";

  v.print();
  std::cout << "\n";
}



