#include <iostream>
#include <fstream>
#include <string>

int main(void){
  std::ifstream fin;
  std::string s;
  fin.open("entrada.txt");
  if(fin.is_open()){
    std::cout << "abriu\n";
  }
  fin >> s;
  std::cout << s << std::endl;
  fin >> s;
  std::cout << s << std::endl;
  fin.close();
}


