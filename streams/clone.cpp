#include <fstream>
#include <iostream>
#include <string>

int main(void) {
  std::ifstream fin;
  std::ofstream fout;
  int c;
  fin.open("entrada.txt");
  fout.open("saida.txt");

  while (fin.good()) {
    c = fin.get();
    if(fin.good()){
      fout.put(c);
    }
  }

  fin.close();
  fout.close();
}
