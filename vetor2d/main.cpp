#include <iostream>
#include "vetor2d.h"

int main(void){
    Vetor2d v1(3,4), v2(5,6), *v3;
    v1.print();
    v2.print();
    v1.setX(3);  v1.setY(4);
    v2.setX(5);  v2.setY(6);

    v3 = &v1;
    std::cout << "v3 = " << v3 << std::endl;

    v1.meuEndereco();

    v3->print();
   // v3->setX(7);
   // v3->print();
  //  (*v3).print();


//    std::cout << v1.produto(v2) << std::endl;
  //  std::cout << "passou\n";
 //   std::cout << v.getX() << std::endl;
 //   v.print();
 //   std::cout << "norma  = " << v.norma() << std::endl;
 //   std::cout << "angulo = " << v.angulo() << std::endl;
 //   u = v.unitario();
 //   u.print();
}




