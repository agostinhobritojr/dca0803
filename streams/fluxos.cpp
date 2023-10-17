#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(void){
  std::ofstream fout; // fluxo de saida
  std::ifstream fin; // fluxo de entrada
  std::string nome; // classe string para guardar nomes
  int x = 4;
  fout.open("arquivo.txt");
  if(!fout.is_open()){
    std::cout << "nao abriu arquivo.txt para escrita\n";
    std::exit(0);
  }
  fout << "x = " << x << "\n";
  fout << "Agostinho de Medeiros Brito Junior\n";
  fout.close();

  fin.open("arquivo.txt");
  if(!fin.is_open()){
    std::cout << "nao abriu arquivo.txt para leitura\n";
    std::exit(0);
  }
  fin >> nome;
  std::cout << "leu: " << nome << "\n";
  std::getline(fin, nome);
  std::cout << "leu: " << nome << "\n";
  fin.close();

}

