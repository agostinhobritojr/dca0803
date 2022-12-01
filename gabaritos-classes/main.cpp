#include <iostream>
#include "alo.h"

int main(){
  Alo<int> a(3);
  Alo<float> b(3.5);
  std::cout << a.getX() << std::endl;
  std::cout << b.getX() << std::endl;
  return 0;
}
