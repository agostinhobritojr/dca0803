#ifndef VETOR_CPP
#define VETOR_CPP
// declaracao da classe
class Vetor2d{
private:
  float x, y;
public:
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY();
  void setZero();
  void print();
  float norma();
  float angulo();
  Vetor2d soma(Vetor2d v2);
};

#endif // VETOR_CPP
