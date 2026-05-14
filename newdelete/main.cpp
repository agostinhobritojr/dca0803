#include <iostream>

class Alo{
    int x;
public:
    Alo(int x){
        this->x = x;
        std::cout << "construtor c/argumentos\n";
    }
    Alo(){
        std::cout << "construtor padrao\n";
    }


    ~Alo(){
        std::cout << "destrutor\n";
    }
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
    int *x, n;
    // alocacao de um unico elemento (tipo primitivo)
    x = new int;
    *x = 3;
    std::cout << "x = " << x << "; *x = " << *x << "\n";
    delete x;

    // alocacao de bloco (tipo primitivo)
    n = 10;
    x = new int[n];
    x[3] = 35;
    delete [] x;

    // alocacao de objetos de classes (um objeto)
    Alo *p;

    p = new Alo(3);
    p->print();
    delete p;

    p = new Alo[5];
    p[2].print();
    delete [] p;

    return 0;
}



