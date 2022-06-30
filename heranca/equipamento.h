#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
private: // acesso apenas pela classe
  char nome[100];
  char fabricante[100];
protected: // acesso tambem pelas HERDEIRAS
  float preco;
public: // acesso por todos
  Equipamento();
  Equipamento(int a);
  ~Equipamento();
  void setNome(const char *_nome);
  void setFabricante(const char *_fabricante);
  void setPreco(float _preco);
  char* getNome(void);
  char* getFabricante(void);
  float getPreco(void);
};

#endif // EQUIPAMENTO_H
