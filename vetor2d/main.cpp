#include <iostream>
#include <cmath>
#include "vetor2d.h"

#define PI 3.14

int main(void){
  Vetor2d v;
  float tam;

  v.setX(3); v.setY(PI);

  tam = v.tamanho();

  std::cout << "tamanho = " << tam << "\n";

  v.print();
  std::cout << "\n";
}



