#ifndef ALO_H
#define ALO_H
#include <iostream>

template <typename T>
class Alo {
 private:
  T a;

 public:
  Alo();
  void setA(T a);
  void print();
};

template <typename T>
Alo<T>::Alo() {
  std::cout << "Construtor de alo\n";
}

template <typename T>
void Alo<T>::setA(T a) {
  this->a = a;
}

template <typename T>
void Alo<T>::print() {
  std::cout << "alo x = " << x << "\n";
}
#endif