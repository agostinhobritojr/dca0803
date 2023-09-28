// declaracao da classe Vetor2d

class Vetor2d{
private:
    float y;
    float x;
public:
    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    void print();
    float norma();
    float angulo();
    Vetor2d unitario(void);
    Vetor2d soma(Vetor2d v);
};
