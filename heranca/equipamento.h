#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
private:
    char nome[100];
    char fabricante[100];
    // propriedades e metodos protegidos
    // podem ser acessiveis pela propria classe
    // e PELAS HERDEIRAS DELA
protected:
    float preco;
public:
    Equipamento(float _preco);
    ~Equipamento();
    void setNome(const char *nome_);
    void setFabricante(const char *fabricante_);
    void setPreco(float preco_);
    char* getNome(void);
    char* getFabricante(void);
    float getPreco(void);
};

#endif // EQUIPAMENTO_H
