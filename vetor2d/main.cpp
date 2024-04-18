#include <iostream>
#include <cmath>
#include "vetor2d.h"

int main(void){
  Vetor2d v; // v eh um objeto da classe Vetor2d
  v.setX(3);
  std::cout << v.getX() << std::endl;
  v.setY(4);
  v.print();
  std::cout << "norma = " << v.norma() << std::endl;
  std::cout << "angulo = " << v.angulo() << std::endl;
}
