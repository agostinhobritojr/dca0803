#include <iostream>

template <typename T>
class Alo{
private:
    T x, y;
public:
    Alo(T param);
    T getX();
    Alo getAlo();
};

template <typename T>
Alo<T> Alo<T>::getAlo(){
    Alo<T> ret;
    return ret;
}

template <typename T>
Alo<T>::Alo(T param){
    x = param;
}

template <typename T>
T Alo<T>::getX(){
    return x;
}


int main(){
    Alo<int> aloint(10);
    Alo<float> alofloat(1.5);

    std::cout << aloint.getX() << std::endl;
    std::cout << alofloat.getX() << std::endl;

    return 0;
}


