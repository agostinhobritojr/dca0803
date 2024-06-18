#include <iostream>

class Base{
public:
    int x;
    Base(int _x){
        x = _x;
    }
};

class Herdeira: public Base{
public:
    int y, z;
    Herdeira(int _y) : Base(_y), z(_y){
        y = _y;
    }
    void operator=(Base &b){
        x = b.x;
        y = z = 0;
    }
};

int main(){
    Herdeira h(4);
    Base b(3);

 //   b = h;

    h = b;

 //   std::cout << b.x << std::endl;

    std::cout << h.x << " x " << h.y <<
        " x " << h.z << std::endl;
    return 0;
}
