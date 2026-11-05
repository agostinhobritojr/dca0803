#include <iostream>

#include "alo.h"

int main(void) {
  Alo<int> aloint;
  Alo<float> alofloat;

  aloint.setA(34.25);
  aloint.print();

  alofloat.setA(1.45);
  alofloat.print();
}