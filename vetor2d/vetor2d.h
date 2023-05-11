#ifndef VETOR2D_H
#define VETOR2D_H

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
    // construtor padrao da classe
    Vetor2d();
    // construtor com argumentos
    Vetor2d(int x_, int y_);

    void setX(float x_);
    float getX();

    void setY(float y_);
    float getY(void);
    float norma(); // calcula o seu tamanho
    float teta(); // angulo com eixo x
    void print(); // imprime o vetor
    Vetor2d soma(Vetor2d v);
    Vetor2d subtrai(Vetor2d v);
    // SOBRECARGAS dos metodos "mult"
    // sao diferenciadas conforme os argumentos
    // que sao repassados
    Vetor2d mult(float a);
    float mult(Vetor2d v);
    // o tipo de retorno nao pode ser usado
    // para diferenciar uma nova sobrecarga
    // Vetor3d mult(Vetor2d v);
};


#endif // VETOR2D_H
