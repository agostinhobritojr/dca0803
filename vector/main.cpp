#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> numeros;
  std::vector<int>::iterator it;

  for (int i = 0; i < 60; i++) {
    numeros.push_back(i + 1);
  }

  std::srand(std::time(0));

  std::random_shuffle(numeros.begin(), numeros.end());

  for (it = numeros.begin(); it != numeros.end(); it++) {
    //    std::cout << *it << " ";
  }

  for (auto v : numeros) {
    std::cout << v << " ";
  }

  std::cout << "\n";

  std::sort(numeros.begin(), numeros.begin() + 6);

  for (it = numeros.begin(); it != numeros.begin() + 6; it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  return 0;
}
