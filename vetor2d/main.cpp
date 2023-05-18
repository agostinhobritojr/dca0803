#include <iostream>
#include "vetor2d.h"

int main(void){
    // Declaracao do objeto v
    // que pertence aa classe Vetor2d
    std::cout << "passou aqui 1----\n";
    Vetor2d v, v4(2), v1(3,1), v2(v1), v3=v2;
    std::cout << "passou aqui 2----\n";
  // v1.setX(0); v2.setY(0);
  // v.print();
  // v4.print();
  // v1.print();

    v3 = v1.subtrai(v2);
    v3.print(); std::cout << "\n";

    /*
    float valor;
    // v.x = 3;

    v.setX(3); v.setY(4);
    v1.setX(2); v1.setY(-1);
    v2 = v.soma(v1); // v2 = (5,3)
    v2.print();
    std::cout << "\n";

    v1.setX(3); v1.setY(4);
    v2.setX(2); v2.setY(-1);


    v3 = v1.mult(1.8);
    v3.print(); std::cout << "\n";

    float a;
    a = v1.mult(v2);
    std::cout << "a = " << a << "\n";

    valor = v.getX();
    std::cout << "valor = " << valor << std::endl;
    std::cout << "norma = " << v.norma() << std::endl;
    std::cout << "angulo = " << v.teta() << std::endl;
    v.print();
    std::cout << "\n";
*/
}



