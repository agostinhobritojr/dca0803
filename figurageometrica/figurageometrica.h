#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica(){};
    // funcao virtual PURA
    // TODA CLASSE QUE POSSUI PELO MENOS
    // UMA FUNCAO VIRTUAL PURA EH CHAMADA
    // DE CLASSE ABSTRATA
    virtual void draw() = 0;
};

#endif // FIGURAGEOMETRICA_H
