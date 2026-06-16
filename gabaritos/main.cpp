#include <iostream>

template <typename T>
T media(T a, T b){
    return (a+b)/2;
}

int main(){
    int a, b, c;
    float x, y, z;
    a = 1;  b = 2;
    x = 1;  y = 2;
    c = media <int> (a, b);
    std::cout << "media (a,b) = " << c << "\n";
    z = media<float>(x, y);
    std::cout << "media (x,y) = " << z << "\n";
    return 0;
}



