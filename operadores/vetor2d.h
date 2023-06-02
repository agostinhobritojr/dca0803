#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
    float x, y;
public:
    Vetor2d(float mx=0, float my=0);
    Vetor2d soma(Vetor2d v);
    Vetor2d operator+(Vetor2d v);
    Vetor2d operator-(Vetor2d v);
    Vetor2d operator*(float a);
    float operator*(Vetor2d v);
    // funcao amiga da classe
    // pode acessar as interfaces privadas
    friend Vetor2d operator* (float a, Vetor2d v);
    void print();
};

Vetor2d operator* (float a, Vetor2d v);

#endif // VETOR2D_H
