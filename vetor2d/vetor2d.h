#ifndef VETOR2D_H
#define VETOR2D_H

// declaracao da classe Vetor2d
class Vetor2d{
private:
    float x, y;
public:
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
