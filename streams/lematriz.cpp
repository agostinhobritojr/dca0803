#include <iostream>
#include <fstream>

//int main(void){
int main(int argc, char* argv[]){
  int nl, nc;
  float **f;
  std::ifstream fin;
//  fin.open("matriz.txt");
  fin.open(argv[1]);
  if(!fin.is_open()){
    std::cout << "nao abriu " << argv[1] << std::endl;
    std::exit(0);
  }
  fin >> nl >> nc;
  std::cout << "nl = " << nl << "; nc = " << nc << std::endl;
  f = new float*[nl];
  f[0] = new float[nc*nl];
  for(int i=1; i<nl; i++){
    f[i] = f[i-1] + nc;
  }

  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      fin >> f[i][j];
    }
  }

  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      std::cout << f[i][j] << " ";
    }
    std::cout << std::endl;
  }

  fin.close();
}
