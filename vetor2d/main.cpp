#include <iostream>
#include "vetor2d.h"

void setX(float x_){
    std::cout << "Alo, maria\n";
}

int main(void){
    // Declaracao do objeto v
    // que pertence aa classe Vetor2d
    Vetor2d v;
    // v.x = 3;
    v.setX(3);
    setX(3);
    std::cout << v.getX() << "\n";
}



