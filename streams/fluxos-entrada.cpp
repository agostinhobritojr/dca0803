#include <fstream>
#include <string>
#include <iostream>

int main(void){
  std::ifstream fin;
  std::string s;

  fin.open("planilha.csv");
  if(!fin.is_open()){
    std::cout << "nao abriu o arquivo\n";
    exit(1);
  }
  while( std::getline(fin, s, ',')){
    std::cout << s << std::endl;
  }

//  while( !fin.fail()){
  /*while(fin >> s){
    std::cout << "leu: " << s << "\n";
  }
  */
  fin.close();
}
