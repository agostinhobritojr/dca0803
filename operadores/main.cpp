#include <iostream>
#include "vetor2d.h"
#include "matriz.h"
#include <ctime>

int main(void){
    Vetor2d v, v2(5,6), v3(5,6);
    std::time_t t;

    t = std::clock();
    for(int i=0; i<1000000; i++){
        v = v2*4;
    }
    t = std::clock() - t;
    std::cout << "diff = " << t << std::endl;

    t = std::clock();
    for(int i=0; i<1000000; i++){
        v = 4*v2;
    }
    t = std::clock() - t;
    std::cout << "diff = " << t << std::endl;

    if (v2 == v3){
        std::cout << "igual!\n";
    }


    v = v2 + v3;
    v.print();
    std::cout << "\n";

    std::cout << "escalar = " << v2*v3 << "\n";

    v = v2 * 2;
    v.print();
    std::cout << "\n";
    //    v = v2.operator+(v3);

}






