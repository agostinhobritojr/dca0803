#include <iostream>
#include "alo.h"

int main(){
  Alo<int> a;
  Alo<double> b;
  a.setX(3);
  std::cout << a.getX() << std::endl;
  return 0;
}
