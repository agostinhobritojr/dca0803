#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>

int main(void) {
  std::vector<int> aposta(6);
  std::vector<int> numeros(60);
  std::vector<int>::iterator it;
  std::srand(std::time(0));

  std::cout << "gerador de numeros da megasena\n";

  std::iota(numeros.begin(), numeros.end(), 1);

  for (int i = 0; i < 25; i++) {
    std::random_shuffle(numeros.begin(), numeros.end());

    /*  for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
      }
      std::cout << std::endl;
    */
    std::copy(numeros.begin(), numeros.begin() + 6, aposta.begin());

    std::sort(aposta.begin(), aposta.end());

    std::cout << "aposta: ";
    for (it = aposta.begin(); it != aposta.end(); it++) {
      std::cout << std::setw(2) << *it << " ";
    }
    std::cout << "\n";
  }
}
