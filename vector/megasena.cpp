#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <numeric>  // std::iota
#include <vector>

int main(void) {
  std::vector<int> numero(60);

  std::srand(time(0));

  std::iota(numero.begin(), numero.end(), 1);
  std::random_shuffle(numero.begin(), numero.end());

  for (int i = 0; i < 6; i++) {
    std::cout << numero[i] << " ";
  }

  /*  for (auto i : numero) {
      std::cout << i << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < 6; i++) {
      std::cout << std::rand() % 60 + 1 << " ";
    }
    */
  std::cout << "\n";

  //
}