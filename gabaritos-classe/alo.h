#ifndef ALO_H
#define ALO_H

template <typename T>
class Alo {
 private:
  T x, y;

 public:
  Alo(T param);
  T getX();
};

template <typename T>
Alo<T>::Alo(T param) {
  x = y = param;
}

template <typename T>
T Alo<T>::getX() {
  return x;
}

#endif