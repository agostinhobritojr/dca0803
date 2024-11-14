#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
    float x, y;
public:
    void setX(float x_);
    float getX(void);
    void setY(float y_);
    float getY();
    void print();
    float norma();
    float angulo();
    Vetor2d unitario();
};
#endif // VETOR2D_H
