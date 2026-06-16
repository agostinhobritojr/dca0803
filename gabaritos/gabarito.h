#ifndef GABARITO_H
#define GABARITO_H

// #include <iomanip>

// f << std::fixed;
// f << std::setprecision(2);

template <typename T>
T media(T a, T b) {
  return (a + b) / 2;
}

template <typename T, typename W, int n = 10>
class Foo {
  T vetor[n];
  W valor;

 public:
  Foo(int v) {}
};

template <typename T>
class Alo {
 private:
  T x, y;

 public:
  Alo(T param);
  T getX();
  Alo<T> retorno();
};

template <typename T>
Alo<T> Alo<T>::retorno() {
  Alo<T> x;
  return x;
}

template <typename T>
Alo<T>::Alo(T param) {
  this->x = param;
}

template <typename T>
T Alo<T>::getX() {
  return x;
}

#endif