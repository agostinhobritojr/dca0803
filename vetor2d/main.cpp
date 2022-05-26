#include <iostream>
#include <cmath>
#include "vetor2d.h"

#define PI 3.14

int main(void){
  Vetor2d v, v1(5,6), v2(7,4);

  v.print();

  std::cout << "\n";

  v.setX(3); v.setY(4);

  v = v1.soma(v2);
  v.print();
  std::cout << "\n";
}



