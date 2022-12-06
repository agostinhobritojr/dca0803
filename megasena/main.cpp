/*
 * Gerador de Numeros da Megasena
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <numeric>
#include <algorithm>

int main(){
  std::vector<int> dezenas(60), aposta(6);
// for(int i=0; i<dezenas.size(); i++){
// std::cout << dezenas[i];
  for(auto i: dezenas){ // C++ 11
    std::cout << i << ",";
  }
  std::cout << std::endl;
  std::srand(std::time(0));
  std::iota(dezenas.begin(),dezenas.end(),1);
  std::random_shuffle(dezenas.begin(), dezenas.end());
  std::copy(dezenas.begin(), dezenas.begin()+6, aposta.begin());

  for(auto i: aposta){ // C++ 11
    std::cout << i << ",";
  }
  std::cout << std::endl;

//  std::cout << std::rand() << std::endl;



  return 0;
}





