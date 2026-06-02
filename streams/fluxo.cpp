#include <cstdlib>
#include <fstream>
#include <iostream>

int main(void) {
  std::ofstream fout;
  int nvoxels = 43;
  fout.open("teste.off");
  if (!fout.is_open()) {
    std::cout << "nao abriu\n";
    exit(1);
  }
  fout << "OFF\n";
  fout << nvoxels * 8 << " " << nvoxels * 6 << " 0\n";
  fout.close();
}