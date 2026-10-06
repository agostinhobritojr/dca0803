#include <iostream>
#include "vetor2d.h"

#define PI 3.1415

int main(){
  Vetor2d v1, v2, v3;
  v1.setX(3);
  v1.setY(4);
  std::cout << v1.angulo() << std::endl;
  std::cout << "v1 = ";
  v1.print();
  std::cout << "\n";
  return 0;
}
