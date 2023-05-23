#include <fstream>
#include <cstdlib>
#include <iostream>

int main(void){
  std::ofstream fout;
  fout.open("nome.txt");
  if(!fout.is_open()){
    exit(1);
  }
  fout << "Agostinho Brito \n";
  fout.close();
}
