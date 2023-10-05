#include <iostream>

class Alo{
    int x;
public:
    Alo(int x=0){
        std::cout << "construtor\n";
        this->x = x;
    }
    ~Alo(){
        std::cout << "destrutor\n";
    }
    void print(){
        std::cout << "x = " << x << std::endl;
    }
};

int main(){
    Alo *pa, *pb;
    pa = new Alo(3);
//    pb = new Alo; // invocacao do construtor PADRAO
    pa->print();
    delete pa;

    pa = new Alo[4];
    pa[0].print();
    delete [] pa;

    return 0;
}
