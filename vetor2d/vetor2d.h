#ifndef VETOR2D_H
#define VETOR2D_H
class Vetor2d{
private:
  float x, y;
public:
  // construtor da classe
  // construtor padrao (default)
 // Vetor2d();
  // construtor com argumentos
  Vetor2d(int x_ = 4, int y_ =5);
  // construtor de copia
  Vetor2d(Vetor2d& v);

  // destrutor
  ~Vetor2d();

  void setX(float x_);
  float getX();
  void print();
  void setY(float y_);
  float getY();
  float tamanho(void);
  float angulo();
  Vetor2d soma(Vetor2d v);
  Vetor2d subtracao(Vetor2d v);
  float   produto(Vetor2d v);
 // sobrecarga de metodo
  Vetor2d produto(float a);
};
#endif // VETOR2D_H
