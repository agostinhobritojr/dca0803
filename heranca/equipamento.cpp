#include "equipamento.h"
#include <cstring>
#include <iostream>

Equipamento::Equipamento(int preco){
    this->preco = preco;

    std::cout << "construtor equipamento\n";
}

Equipamento::~Equipamento()
{
    std::cout << "destrutor equipamento\n";
}

void Equipamento::setNome(const char *nome_){
    strcpy(nome,nome_);
}

void Equipamento::setFabricante(const char *fabricante_){
    strcpy(fabricante,fabricante_);
}

void Equipamento::setPreco(float preco_){
    preco=preco_;
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
