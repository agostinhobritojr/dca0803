#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <iomanip>

int main(){
  std::vector<int> aposta(6);
  std::vector<std::vector<int>> matrizApostas;

  std::vector<int> dezenas(60);
  std::srand(std::time(0));
  std::iota(dezenas.begin(), dezenas.end(), 1);

  for(int i=0; i<10; i++){
    std::random_shuffle(dezenas.begin(),
                        dezenas.end());
    std::copy(dezenas.begin(), dezenas.begin()+6,
              aposta.begin());
    matrizApostas.push_back(aposta);
  }

  for(int i=0; i<matrizApostas.size(); i++){
    for(int j=0; j<matrizApostas[i].size(); j++){
      std::cout << std::setw(2) << matrizApostas[i][j] << " ";
    }
    std::cout << std::endl;
  }
/*  for(auto i: aposta){
    std::cout << i << ", ";
  }*/

  return 0;
}
