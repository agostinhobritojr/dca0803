#include <fstream>
#include <cstdlib>
#include <iostream>

int main(void){
  std::ofstream fout;
  fout.open("nome.txt");
  if(!fout.is_open()){
    exit(1);
  }
  int x=4;
  fout << "Agostinho Brito " << x << "\n";
  fout.close();
}
