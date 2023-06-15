#include <iostream>

// a declaracao template influencia SOMENTE
// funcao que vem IMEDIATAMENTE ABAIXO
template <typename T>
T media(T a, T b){
    return (a+b)/2;
}

template <typename T>
T media2(T a, T b){
    return (a+b)/2;
}

int main(){
    Vetor2d v1(3,4), v2(5,6), v3;
    v3 = media(v1,v2);

    int a=1, b=2, c=3;
    float x=4, y=5, z=6;
  //  c = media<int>(a, b);
 //   c = media(a,b);
    c = media<int>(4,5);
    std::cout << "c = " << c << std::endl;
    z = media<float>(a, y);
  //  z = media(a,y);
    std::cout << "z = " << z << std::endl;
    return 0;
}
