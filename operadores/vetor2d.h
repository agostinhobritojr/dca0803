#ifndef VETOR2D_H
#define VETOR2D_H

#include <ostream>

class Vetor2d{
private:
    float x, y;
public:
    // construtor padrao
    // invocado quando o objeto eh criado
 //   Vetor2d();
    // construtor com argumentos
    Vetor2d(float x_=1, float y_=2);
    // construtor de copia
    Vetor2d(const Vetor2d& v1);

    // destrutor
    // invocado quando o objeto eh destruido
    ~Vetor2d();

    void setX(float x);
    float getX(void);
    void setY(float y_);
    float getY(void);
    void print(void);
    void meuEndereco(void);
    float norma(void);
    float angulo(void);
    Vetor2d unitario(void);
    // produto escalar
    float produto(Vetor2d v1);
    Vetor2d produto(float a);
    Vetor2d soma(Vetor2d v1);

    Vetor2d operator + (Vetor2d v1);
    Vetor2d operator * (float a);
    float operator * (Vetor2d v1);

    // funcao amiga (qualificador friend)
    friend Vetor2d operator*(float a, Vetor2d v1);
    friend std::ostream& operator << (std::ostream &os,
                                    Vetor2d v1);
};

//Vetor2d operator*(float a, Vetor2d v1);




#endif // VETOR2D_H





