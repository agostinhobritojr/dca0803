#ifndef VETOR2D_H
//-----
#define VETOR2D_H

class Vetor2d{
  private:
  float y;
  float x;
  public:
  void setX(float x_);
  float getX(void);
  void setY(float y_);
  float getY(void);
  void print(void);
  float norma(void);
  Vetor2d unitario(void);
  float angulo();
  // sobrecarga de metodos
  Vetor2d produto(float a);
  float produto(Vetor2d v2);
};
//---
#endif // VETOR2D_H



