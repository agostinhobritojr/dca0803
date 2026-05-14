#include <iostream>

class Alo{
    int x;
public:
    void setX(int x){
        this->x = x;
    }
    int getX(){
        return x;
    }
    void print(){
        std::cout << "alo print: " << this << "\n";
    }
};

int main(){
    Alo a, *p, *p1;
    std::cout << "end a = " << &a << "\n";
    a.setX(3);
    p = &a;
    std::cout << "p1    = " << p << "\n";
    p->print();
    std::cout << "x = " << p->getX() << "\n";
    return 0;
}









