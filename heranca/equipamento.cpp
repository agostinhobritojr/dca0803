#include "equipamento.h"
#include <cstring>
#include <iostream>

Equipamento::Equipamento(){
  std::cout << "Construtor Equipamento\n";
}

Equipamento::~Equipamento(){
  std::cout << "Destrutor Equipamento\n";
}

void Equipamento::setNome(const char *nome_){
  strcpy(nome,nome_);
}

void Equipamento::setFabricante(const char *fabricante_){
  strcpy(fabricante,fabricante_);
}

void Equipamento::setPreco(float preco_){
  if(preco_ < 0){
    preco = 0;
  }
  else{
    preco=preco_;
  }
}

char* Equipamento::getNome(void){
  return nome;
}

char* Equipamento::getFabricante(void){
  return fabricante;
}

float Equipamento::getPreco(void){
  return preco;
}