#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
    float y;
    float x;
public:
    // 1. construtores nao retornam valores
    // 2. construtores nao sao invocados pelo usuario
    // 2.1. a invocacao eh automatica
    // CONSTRUTOR PADRAO
    // Vetor2d v1, v2, v3;
   // Vetor2d();

    // Construtor com argumentos
    // (e com valores iniciais)
    Vetor2d(float x_=0, float y_=0);
  //  Vetor2d(int a, int b);
  //  Vetor2d(float x_);

    // construtor de copia
    // (argumento por REFERENCIA)
    Vetor2d(const Vetor2d &copia);

    // Funcao destrutor
    ~Vetor2d();

    Vetor2d soma(Vetor2d v1);
    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    float norma();
    float angulo();
    void print();
};

#endif // VETOR2D_H
