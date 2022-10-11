#include <iostream>
#include "vetor2d.h"

int main(void){
  Vetor2d v;
  Vetor2d v1, v2, v3;
  v1.setX(3); v1.setY(4);
  v2.setX(5); v2.setY(2);
  v3 = v1.soma(v2);
  v3.print();
  std::cout << std::endl;
/*  float alo, tam, ang;
 // v.x = -3; // x eh privada da classe Vetor2d
  v.setX(0);
  std::cout << v.getX();
  v.setY(4);
  alo = v.getY();
  v.print();
  tam = v.norma();
  std::cout << "norma = " << tam << std::endl;
  ang = v.angulo();
  std::cout << "angul = " << ang << std::endl;
 */
}










