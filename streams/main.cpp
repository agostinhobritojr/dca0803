#include <fstream>
#include <iostream>
#include <cstdlib>

int main(void){
  std::ofstream fout;
  int nvertices, nfaces;
  fout.open("nome.off");
  if(!fout.is_open()){
    std::cout << "deu errado\n";
    exit(1);
  }
  nvertices = 8;
  nfaces = 6;
  fout << "OFF\n";
  fout << nvertices << " " << nfaces << " 0\n";
  fout.close();
}



