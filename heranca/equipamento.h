#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

/**
 * @brief A classe Equipamento define um equipamento genérico
 * @details A classe Equipamento serve de base
 * para criação de outras classes herdeiras desta.
 */

class Equipamento{
    // interfaces protegidas podem ser acessiveis
    // pela propria classe e pelas
    // classes herdeiras, contemplando toda a cadeia
    // de heranca
protected:
    char nome[100];
    char fabricante[100];
    float preco;
public:
    /**
     * @brief Equipamento: construtor da classe
     */
    Equipamento();
    /**
     * @brief Equipamento: construtor da classe
     * @param _preco define o preço inicial do equipamento
     *  - Preço 1
     *  - Preço 2
     *  - Preço 3
     *
     * @code
     * Equipamento equip;
     * equip.setPreco(32);
     * @endcode
     */
    Equipamento(int _preco);
    ~Equipamento();
    /**
     * @brief setNome alo
     * @param _nome diz o nome que pode ser da forma
     * \f[ f(x) = \int_a^b g(x) dx \f]
     */
    void setNome(const char *_nome);
    void setFabricante(const char *_fabricante);
    void setPreco(float _preco);
    /**
     * @brief getNome retorna o nome do fabricante
     * @return ponteiro para char com o nome do fabricante
     */
    char* getNome(void);
    char* getFabricante(void);
    float getPreco(void);
};

#endif // EQUIPAMENTO_H
