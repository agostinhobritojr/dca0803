#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{

private:
    float x;
    float y;
public:
    void setX(float x_);
    void setY(float y_);
    float getX();
    float getY();
    void print();
    void alo();
    Vetor2d produto (float a);

};


#endif // VETOR2D_H
