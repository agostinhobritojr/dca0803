#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    // funcao virtual habilita o polimorfismo
    // ou seja, se a subclasse sobrescrever o metodo
    // eh ele que sera chamado no caso de um ponteiro
    // apontar para a subclasse
    virtual void draw();
};

#endif // FIGURAGEOMETRICA_H
