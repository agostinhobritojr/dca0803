#include <iostream>
#include "gabarito.h"

int main(void){

    Alo<int> alo(3);
    std::cout << "xalo = " << alo.getX() << "\n";


    int a, b, c;
    float x, y, z;
    a = 1; b = 2;
    x = 1; y = 2;
    c = media<int>(a,b);
    std::cout << "media int   = " << c << "\n";
    z = media<float>(x,y);
    std::cout << "media float = " << z << "\n";
    z = media<float>(a,b);
    std::cout << "nova media  = " << z << "\n";
    std::cout << "Nova media  = " << media<int>(x,y) << "\n";

    z = media <float> (a, y);
    std::cout << "Nova Media  = " << z << "\n";
}
