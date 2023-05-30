#include <fstream>
#include <cstdlib>
#include <iostream>

int main(void){
  std::ifstream fin;
  fin.open("entrada.txt");
  if(!fin.is_open()){
    exit(1);
  }
  int x, y;
  fin >> x >> y;
  std::cout << "x = " << x << " y = " << y << "\n";
  fin >> x >> y;
  std::cout << "x = " << x << " y = " << y << "\n";
  fin.close();
  std::cout << "x = " << x << " y = " << y << "\n";
 }
