#include <iostream>
#include "vetor2d.h"

int main(void){
  Vetor2d v;
  Vetor2d v1(3.0,4.0), v2{5.0,2.0};
  Vetor2d v3(5);
  Vetor2d v4 = v3, v5(v1), v6{v1};

  v3.print();
  std::cout << std::endl;

//  v1.setX(3); v1.setY(4);
//  v2.setX(5); v2.setY(2);
  v3 = v1.soma(v2);
/*  v3.print();
  std::cout << std::endl;
  std::cout << v1.produto(v2);
  std::cout << std::endl;
  v3 = v1.produto(2);
  v3.print();
  std::cout << std::endl;

  v.teste1((int)2,(float)2);

 *   float alo, tam, ang;
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










