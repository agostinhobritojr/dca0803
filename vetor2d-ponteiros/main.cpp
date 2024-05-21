#include <iostream>
#include <cmath>
#include "vetor2d.h"

int main(void){
    Vetor2d *v;

    v = new Vetor2d(3);
    delete v;

    v = new Vetor2d(3,4);
    delete v;

    v = new Vetor2d[5];

    v[0].setX(3);
    v[1].setY(4);
    (v+1)->print(); std::cout << std::endl;
    v[1].print(); std::cout << std::endl;
    std::cout << std::endl;

    for(int i = 0; i<5 ; i++){
        v[i].print();
        std::cout << std::endl;
    }


    delete [] v;

    /*    Vetor2d v;
    Vetor2d v1(3,4);
    Vetor2d v2(5,6);
    float result;
    result = v1.produto(v2);
    std::cout << "escalar = " << result << std::endl;
*/

    //    v.print();
//    v1.print();
//    v2.print();
  // v eh um objeto da classe Vetor2d
 // v.setX(3);
 // std::cout << v.getX() << std::endl;
 // v.setY(4);
//  v.print();
 // std::cout << "norma = " << v.norma() << std::endl;
 // std::cout << "angulo = " << v.angulo() << std::endl;
}
