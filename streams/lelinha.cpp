#include <fstream>
#include <iostream>
#include <string>

int main(void) {
  std::ifstream fin;
  std::string s;
  char alo[50];

  fin.open("teste.csv");

  while (fin.good()) {
    std::getline(fin, s,',');
    std::cout << "leu " << s << std::endl;
  }

  fin.close();
}
