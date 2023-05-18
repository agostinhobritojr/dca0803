#include <iostream>
#include "vetor2d.h"

int main(){
    Vetor2d v;
    Vetor2d *pv;
   // v.print();
    pv = &v;
    std::cout << "pv = " << pv << "\n";
    pv->print();
    return 0;
}
