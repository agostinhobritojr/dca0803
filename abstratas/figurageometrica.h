#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica{
protected:
    float r, g, b, a;
public:
    FiguraGeometrica();
    // FUNCAO VIRTUAL PURA TORNA A CLASSE ABSTRATA
    virtual void draw()=0;
};

#endif // FIGURAGEOMETRICA_H
