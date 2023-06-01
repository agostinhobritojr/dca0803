#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
    float x, y;
public:
    Vetor2d(float mx=0, float my=0);
    Vetor2d soma(Vetor2d v);
    Vetor2d operator+(Vetor2d v);
    void print();
};

#endif // VETOR2D_H
