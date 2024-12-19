#ifndef ALO_H
#define ALO_H
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

#endif // ALO_H
