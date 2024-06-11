#include <iostream>

#include "alo.h"

int main(void) {
  Alo<int> a(3);
  Alo<float> b(4.5);

  std::cout << "a = " << a.getX() << std::endl;
  std::cout << "b = " << b.getX() << std::endl;
}