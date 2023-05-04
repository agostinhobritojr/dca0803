#include <iostream>

class Vetor2d{
private:
    // sao as partes privadas da classe
    // somente as funcoes-membro da classe podem
    // acessar diretamente
    float y;
    float x;
public:
    // sao as partes publicas da classe
    // qualquer trecho de codigo pode usar o
    // que vem a seguir
    void setX(float x_){
        x = x_;
    }
    float getX(){
        return x;
    }
}; // <--- NAO ESQUECA DO ";"

int main(void){
    // Declaracao do objeto v
    // que pertence aa classe Vetor2d
    Vetor2d v;
   // v.x = 3;
    v.setX(3);
    std::cout << v.getX() << "\n";
}



