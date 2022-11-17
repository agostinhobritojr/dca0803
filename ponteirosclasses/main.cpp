#include <iostream>
#include "alo.h"

int main(){
  Alo *pa;
/*
  // pa = new Alo;
  // a sequencia de argumentos define a
  // escolha do construtor

  // new e delete
  pa = new Alo(5);
  pa->print();
  delete pa;
  pa = nullptr; // em C pa = NULL

  // new[] e delete[]
  pa = new Alo[5];
  pa[2].print(); // (pa+2)->print();
  delete [] pa;
*/
  int *x;

  // new e delete
  x = new int;
//x = (int*) malloc(sizeof(int));
  *x = 3;
  x[0] = 3;
  std::cout << *x << std::endl;
  std::cout <<"x =" << x << std::endl;
  delete x;
  // evita liberacao dupla de memoria
  // acidental
  x = nullptr;
  delete x;

  std::cout << "passou\n";

  // new[] e delete[]
  x = new int[5];
//x = (int*) malloc(5*sizeof(int));
  x[2] = 4;
  delete [] x;
/*
  Alo a;
  Alo *pa;
 // pa = &a;
  a.print();
  pa->print();
  std::cout << "passou\n";
//  std::cout << sizeof (a) << std::endl;
//  std::cout << sizeof (pa) << std::endl;
*/
  return 0;
}
