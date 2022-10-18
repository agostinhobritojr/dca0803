#ifndef VETOR_CPP
#define VETOR_CPP
// declaracao da classe
class Vetor2d{
private:
  float x, y;
public:
  // construtor default da classe
  //  Vetor2d();
  // construtor com argumentos
  // permite o valor opcional y
  // se _y for passado, assume-se o valor
  // caso contrario, _y  = 10
  Vetor2d(float x_=0, float y_=0);

  // construtor de cohpia
  // realiza COPIA PROFUNDA do objeto
  Vetor2d(const Vetor2d &v);

  // destrutor da classe
  ~Vetor2d();
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY();
  void setZero();
  void print();
  float norma();
  float angulo();
  Vetor2d soma(Vetor2d v2);
  Vetor2d subtracao(Vetor2d v2);
  // sobrecarga de mehtodos
  float produto(Vetor2d v2);
  Vetor2d produto(float a);
  void teste1(int a, float b);
  void teste1(float a, int b);
};

#endif // VETOR_CPP

