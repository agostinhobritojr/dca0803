#include <iostream>
#include "vetor2d.h"

int main(){
  Vetor2d v(3,4), *pv;

  std::cout << "pv = " << pv << std::endl;

//  pv = &v;
  pv->print();
//  (*pv).print();
  std::cout << std::endl;
  return 0;
}






