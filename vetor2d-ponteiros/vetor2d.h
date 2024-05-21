#ifndef VETOR2D_H
#define VETOR2D_H

// declaracao da classe Vetor2d
class Vetor2d{
private:
    float x, y;
public:
    // construtores alocam recursos
    //
    // Construtor da classe Vetor2d
    // vvv construtor padrao (sem argumentos)
   // Vetor2d();

    // Construtor com argumentos
    // Vetor2d v(3,4); x<-3 e y<-4
    // Vetor2d v(3);   x<-3 e y<-0
    // Vetor2d v;      x<-0 e y<-0
    // Vetor2d v(,4);  PROIBIDO!
    Vetor2d(float x_=0, float y_=0);

    // Destrutor da classe
    // libera recursos alocados
    // soh existe um destrutor
    ~Vetor2d();

    // Construtor de copia
    Vetor2d(const Vetor2d & v_);

    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    void print();
    // sobrecarga de metodos
    Vetor2d produto(float a);
    float   produto(Vetor2d v);
  //  Vetor3d produto(Vetor2d v);

    float norma();
    float angulo();
};

#endif // VETOR2D_H
