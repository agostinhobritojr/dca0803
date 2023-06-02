#include <iostream>
#include "vetor2d.h"

int main(){
    Vetor2d v1(2,3), v2(5,6), v3;
    float a;
    v1.print();
    v2.print();
//    v3 = v1.soma(v2);
//    v3 = v1.operator+(v2);
    v3 = v1 + v2;    v3.print();
    v3 = v1 - v2;    v3.print();
    v3 = v1*4;       v3.print();
    v3 = 4*v1;       v3.print();
    a = v1*v2;
    std::cout << "a = " << a << "\n";
    return 0;
}


