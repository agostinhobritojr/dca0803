#include "reta.h"
#include <iostream>

Reta::Reta(int x0, int y0, int x1, int y1){
    this->x0 = x0;
    this->y0 = y0;
    this->x1 = x1;
    this->y1 = y1;
}
void Reta::draw(){
    std::cout << "draw Reta: ";
    std::cout << "(" << x0 << "," << y0 << ")->";
    std::cout << "(" << x1 << "," << y1 << ")\n";
 }
