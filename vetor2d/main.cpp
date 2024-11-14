#include <iostream>
#include <math.h>
#include "vetor2d.h"

int main(void){
    Vetor2d v, u;
    v.setX(3);
    v.setY(4);
 //   std::cout << v.getX() << std::endl;
    v.print();
    std::cout << "norma  = " << v.norma() << std::endl;
    std::cout << "angulo = " << v.angulo() << std::endl;
    u = v.unitario();
    u.print();
}




