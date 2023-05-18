#include <iostream>
#include "vetor2d.h"

int main(){
    Vetor2d *v;

//    v = new Vetor2d;
  //  v->print();
    //delete v;

    v = new Vetor2d(3,4);
    v->print();
    delete v;

    std::cout << "\n";
    v = new Vetor2d[5];
    v[1].print();
    (v+1)->print();
    delete [] v;
    return 0;
}
