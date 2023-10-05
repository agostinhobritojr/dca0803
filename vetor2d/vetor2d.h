// declaracao da classe Vetor2d

class Vetor2d{
private:
    float y;
    float x;
public:
    // construtor padrão
    //Vetor2d();
    // construtor com argumentos (e atribuir valores iniciais a estes)
    Vetor2d(float x_=0, float y_=0);

    Vetor2d(const Vetor2d & v);

    ~Vetor2d();
    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    void print();
    float norma();
    float angulo();
    Vetor2d unitario(void);
    Vetor2d soma(Vetor2d v);
    Vetor2d subtracao(Vetor2d v);
    Vetor2d produto(float a);
    float produto(Vetor2d v);
};




