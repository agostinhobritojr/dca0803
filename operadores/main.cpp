#include <iostream>
#include "vetor2d.h"

int main(void){
    Vetor2d v1(3,4), v2(5,6), v3, v4;
    v1.print();

    v4 = 4*v1; // v4 = operator*(4, v1);
    std::cout << "v4 = " << v4 << "\n";
//  ^^^^^^^^^^^^^^^^^^^^ ^^^^^
//      retorna cout      cout
//
 //   v4 = v1;

//    v4.print();
//    v2.print();
//    v3 = v1.soma(v2);
//    v3 = v1.operator+(v2);
//    v3 = v1 + v2;
//    v3.print();

//   float x, y;
//    y = 3;
//    x = (++y) + (++y);
//    std::cout << x << " " << y << std::endl;

//    std::cout.operator<<(23);

}




