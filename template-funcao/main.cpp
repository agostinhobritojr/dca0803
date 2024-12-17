#include <iostream>

template <typename T>
T media(T a, T b){
    return (a+b)/2;
}
int main(){
    int a=1, b=2, c;
    float x=1, y=2, z;

//    c = media<int>(a,b);
    c = media(a,b);
    std::cout << "c = " << c << std::endl;

    z = media<float>(x,y);
    std::cout << "z = " << z << std::endl;

    std::cout << "media = " <<
        media<float>(a,y);
    return 0;
}


