#include <iostream>
#include "figurageometrica.h"
#include "putbox.h"
#include "cutbox.h"
#include "sculptor.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

int main(){
  Sculptor *s;
  int nx, ny, nz;
  int x0, x1, y0, y1, z0, z1;
  float r, g, b, a;
  std::vector<FiguraGeometrica*> f;

  std::ifstream fin;
  std::string str;
  fin.open("/home/ambj/figura.txt");
  if(!fin.is_open()){
    std::exit(0);
  }

  // processa o arquivo enquanto houver linhas
  // para ler
  while(fin.good()){
    fin >> str;
    if(!fin.good()){
      break;
    }
    if(str.compare("dim")==0){
      // li do arquivo a linha dim 10 10 10
      fin >> nx >> ny >> nz;
      std::cout << nx << "x" << ny << "x" << nz;
      std::cout << std::endl;
      s = new Sculptor(nx, ny, nz);

    } else if(str.compare("putbox")==0){
      //  putbox 0 9 0 9 0 9 0 0 1.0 1.0
      fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
      fin >> r >> g >>  b >> a;
      f.push_back(new PutBox(x0, x1,
                             y0, y1,
                             z0, z1,
                             r, g, b, a));

    } else if(str.compare("cutbox")==0){
      fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
      f.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
    }
  }
  for(size_t i=0; i<f.size(); i++){
    std::cout << "draw\n";
    f[i]->draw(*s);
  }
  for(size_t i=0; i<f.size(); i++){
    delete f[i];
  }

  s->writeOFF("/home/ambj/testetrono.off");









  return 0;
}
