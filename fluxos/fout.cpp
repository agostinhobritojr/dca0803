#include <fstream>
#include <cstdlib>
int main(void){
  std::ofstream fout;
  fout.open("/home/ambj/nome.txt"); 
  if(!fout.is_open()){
    exit(1);
  }
  fout << "Agostinho Brito \n";
  fout.close();
}
