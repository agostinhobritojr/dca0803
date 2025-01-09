#include "reta.h"
#include <iostream>

Reta::Reta() {}

Reta::~Reta(){
    std::cout << "destrutor Reta\n";
}

void Reta::draw(){
    std::cout << "draw Reta\n";
}
