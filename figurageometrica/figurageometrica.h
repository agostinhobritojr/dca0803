#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica{
public:
  FiguraGeometrica();
  // funcao virtual PURA
  // esta classe NAO POSSUI IMPLEMENTACAO
  // DO DRAW, mas FORCA AS SUBCLASSES a
  // implementarem este metodo.
  virtual void draw()=0;
  virtual ~FiguraGeometrica(){}
};

#endif // FIGURAGEOMETRICA_H
