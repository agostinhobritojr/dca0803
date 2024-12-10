#include <fstream>
#include <iostream>

void writeOFF(const char* nome) {
  std::ofstream fout;
  int nvoxels;
  nvoxels = 2;
  fout.open(nome);
  if (!fout.is_open()) {
    return;
  }
  fout << "OFF" << std::endl;
  fout << nvoxels * 8 << " " << nvoxels * 6 << " 0" << std::endl;
}

int main(void) {
  std::ofstream fout;
  fout.open("nome.txt");
  writeOFF("teste.off");
  if (!fout.is_open()) {
    std::cout << "nao abriu o arquivo\n";
    exit(0);
  }
  // fout.open("/home/ambj/nome.txt");
  // fout.open("c:/teste/nome.txt");
  fout << "Agostinho Brito";
  std::cout << "passou aqui\n";
  fout.close();
}