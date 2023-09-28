#include <iostream>
#include <cmath> // matematica
#include "vetor2d.h"

int main(void){
    // v eh um objeto da classe Vetor2d
    Vetor2d v, v1, v2, v3, un;
    v1.setX(3); v1.setY(4);
    v2.setX(5); v2.setY(-1);
    v3 = v1.soma(v2);
    v3.print();

   // v.x = 3;
/*    v.setX(3);  v.setY(4);
    v.print(); // (3,4)
    std::cout << "norma  = " << v.norma() << "\n";
    std::cout << "angulo = " << v.angulo() << "\n";
    un = v.unitario();
    un.print();
    v2 = v;
    v2.print();
*/
}



