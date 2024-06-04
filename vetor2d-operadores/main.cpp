#include <iostream>
#include <cmath>
#include "vetor2d.h"

int main(void){
    Vetor2d v;
    Vetor2d v1(3,4);
    Vetor2d v2(5,6);

    //    v = v1.soma(v2);
    //    v = v1.operator+(v2);
       v = v1 + v2;

    v = v1;

    v = v1 * 4;

    v = 4 * v1;

//    v.print();

    std::cout << "v = " << v << " e v1 = " << v1 <<std::endl;














}
