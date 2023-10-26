#include <iostream>

template <typename T>
T media (T a, T b){
    return (a+b)/2;
}

template <typename T, typename U>
U funcao(T a){
    U ret;
    ret = a+1;
    return ret;
}

template <typename T, int N=10>
float teste(T valor){
    T vetor[N];
    // faz alguma coisa...
}

int main(){
    int x=3, y=4, z;
    float a=3, b=4, c;
    z = media<int> (x,y);
    c = media<float> (a,b);
//    c = media (a,b);
    c = media<float>(a,x);
    c = funcao<int, float>(3);
    c = teste<float, 3> (b); // N=3
    c = teste<float> (b); // N=10

    std::cout << "z (int)  = " << z << std::endl;
    std::cout << "c (float)= " << c << std::endl;
    return 0;
}
