#include <iostream>
#include "vetor2d.h"

void setX(float x_){
    std::cout << "Alo, maria\n";
}

int main(void){
    // Declaracao do objeto v
    // que pertence aa classe Vetor2d
    Vetor2d v, v1, v2;
    float valor;
    // v.x = 3;

    v.setX(3); v.setY(4);
    v1.setX(2); v1.setY(-1);
    v2 = v.soma(v1); // v2 = (5,3)
    v2.print();
    std::cout << "\n";

    valor = v.getX();
    std::cout << "valor = " << valor << std::endl;
    std::cout << "norma = " << v.norma() << std::endl;
    std::cout << "angulo = " << v.teta() << std::endl;
    v.print();
    std::cout << "\n";
}



