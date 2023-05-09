#include <iostream>
#include "vetor2d.h"

void setX(float x_){
    std::cout << "Alo, maria\n";
}

int main(void){
    // Declaracao do objeto v
    // que pertence aa classe Vetor2d
    Vetor2d v;
    float valor;
    // v.x = 3;
    v.setX(3);
//    setX(3);
    v.setY(4);
    valor = v.getX();
    std::cout << "valor = " << valor << std::endl;
    std::cout << "norma = " << v.norma() << std::endl;
    std::cout << "angulo = " << v.teta() << std::endl;
    v.print();

}



