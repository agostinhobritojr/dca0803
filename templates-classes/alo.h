#ifndef ALO_H
#define ALO_H

template <typename T>
class Alo{
  T x;
public:
  void setX(T x_);
  T getX(void);
};

template <typename T>
void Alo<T>::setX(T x_){
  x = x_;
}

template <typename T>
T Alo<T>::getX(){
  return x;
}

#endif // ALO_H
