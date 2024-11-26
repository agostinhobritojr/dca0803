#include <iostream>
#include "vetor2d.h"

int main(void){
    Vetor2d v(3,4), u, w;
    v.print();
    u.print();
  //  v.setX(3);
 //   v.setY(4);
    u.setX(5);
    u.setY(-4);
 //   std::cout << v.getX() << std::endl;
    v.print();
    std::cout << "norma  = " << v.norma() << std::endl;
    std::cout << "angulo = " << v.angulo() << std::endl;
    u = v.unitario();
    u.print();
}




