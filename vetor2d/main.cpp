#include <iostream>
#include "vetor2d.h"
#include "matriz.h"


int main(void){
    Vetor2d v, v2;

    float a;
//     v.x = 4;
    v.setX(3);
    v.setY(4);

    v2 = v.produto(3);
    std::cout << "v2 (produto) = ";
    v2.print();
    std::cout << "\n";

    std::cout << "v =  ";
    v.print();
    std::cout << "\n";


    a = v.getX();
    std::cout << "a = " << a << "\n";
}





