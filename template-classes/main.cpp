#include <iostream>
#include "alo.h"

int main(){
    Alo<int> aloint(10);
    Alo<float> alofloat(1.5);

    std::cout << aloint.getX() << std::endl;
    std::cout << alofloat.getX() << std::endl;

    return 0;
}


