#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica{
public:
    FiguraGeometrica();
    // funcoes virtuais servem para que
    // ponteiros para a superclasse se comportem
    // como ponteiros para objetos de subclasses

    // funcao virtual PURA (=0)
    // ELAS NAO POSSUEM IMPLEMENTACAO
    virtual void draw()=0;
    // destrutor virtual deve ser implementado
    // para forcar a chamada do destrutor da subclasse
    virtual ~FiguraGeometrica(){}
};

#endif // FIGURAGEOMETRICA_H
