#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

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
    Equipamento();
    void setNome(const char *_nome);
    void setFabricante(const char *_fabricante);
    void setPreco(float _preco);
    char* getNome(void);
    char* getFabricante(void);
    float getPreco(void);
};

#endif // EQUIPAMENTO_H
