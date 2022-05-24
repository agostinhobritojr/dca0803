#ifndef VETOR2D_H
#define VETOR2D_H
class Vetor2d{
private:
  float x, y;
public:
  void setX(float x_);
  float getX();
  void print();
  void setY(float y_);
  float getY();
  float tamanho(void);
};
#endif // VETOR2D_H
