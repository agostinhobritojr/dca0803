#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica();
    // virtual faz com que o metodo da SUBCLASSE
    // seja executado quando este existir

    // "= 0" cria uma funcao virtual PURA
    // A classe FiguraGeometrica torna-se ABSTRATA
    virtual void draw() = 0;
};

#endif // FIGURAGEOMETRICA_H
