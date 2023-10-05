#include <iostream>
#include <cmath> // matematica
#include "vetor2d.h"

int main(void){
    // v eh um objeto da classe Vetor2d
    Vetor2d v(7.0, 8.0), v1, v2;
    Vetor2d v4=v, v5(v4);  // invocacoes do construtor de copia
    Vetor2d v3, un;
    float a;
    v1.setX(3); v1.setY(4);
    v2.setX(5); v2.setY(-1);
    v3 = v1.soma(v2);
    v3.print();
    v3 = v1.subtracao(v2);
    v3.print();
    v3 = v1.produto(4);
    v3.print();
    a = v1.produto(v2);
    std::cout << "a=" << a;
    std::cout << std::endl;


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



