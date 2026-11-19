#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
  // variaveis protected podem ser acessiveis
  // pela classe e por TODAS as suas herdeiras
  protected:
  float x, y;
  public:
  FiguraGeometrica();
  void setPos(float x, float y);
  virtual void draw();
};

#endif // FIGURAGEOMETRICA_H










