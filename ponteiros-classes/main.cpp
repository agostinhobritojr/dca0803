#include <iostream>

class Alo{
    int x;
public:
    Alo(int x){
        this->x = x;
    }
    void print(){
        std::cout << "x = " << x << std::endl;
        std::cout << "endereco DESTE OBJETO" << this << std::endl;
    }
    void print1(){
        std::cout << "teste\n";
    }
};

int main(){
    Alo a(3);
    Alo *pa;
    pa = &a;
    a.print();
    std::cout << "pa = " << pa << std::endl;
    pa->print();
    (*pa).print();
    return 0;
}








