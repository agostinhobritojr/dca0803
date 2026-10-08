#ifndef VETOR2D_H
//-----
#define VETOR2D_H

class Vetor2d{
private:
  float x;
  float y;
public:
  // os construtores em c++ não possuem tipo de retorno
  // porque não foram feitos para retornar valores
  //
  // o metodo construtor tem o mesmo nome da classe
  Vetor2d();
  // construtor com argumentos
  // podem existir vahrios deles, desde que tenham
  // argumentos diferentes
  Vetor2d(float x_, float y_);
  // construtor de copia
  Vetor2d(const Vetor2d &v2);

  // funcao destrutor
  // usada para liberar todos os recursos alocados pela classe
  ~Vetor2d();

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



