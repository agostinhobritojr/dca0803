// declaracao da classe Vetor2d
#include <iostream>

/**
 * @brief A classe Vetor2d implementa o conceito de vetor
 * bidimensional
 * @details É possível realizar operações com vetores,
 * criando, somando, subtraindo, multiplicado por escalares,
 * entre outras atividades.
 */

class Vetor2d{
private:
    /**
     * @brief y representa a componente y
     */
    float y;
    /**
     * @brief x representa a componente x
     */
    float x;
public:
    // construtor padrão
    //Vetor2d();
    // construtor com argumentos (e atribuir valores iniciais a estes)

    /**
     * @brief Vetor2d
     * @param x_ recebe o valor inicial de x
     * @param y_ recebe o valor inicial de y
     */
    Vetor2d(float x_=0, float y_=0);
    Vetor2d(const Vetor2d & v);
    ~Vetor2d();
    void setX(float x_);
    /**
     * @brief getX retorna o valor de x
     * @return o valor de x em ponto flutuante
     */
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

    // sobrecarga de operadores
    Vetor2d operator + (Vetor2d v);
    Vetor2d operator - (Vetor2d v);
    float operator * (Vetor2d v);
    Vetor2d operator * (float a);
    // funcao amigas
    friend Vetor2d operator*(float a, Vetor2d v1);
    friend std::ostream& operator << (std::ostream & s, Vetor2d v);
};

Vetor2d operator*(float a, Vetor2d v1);










