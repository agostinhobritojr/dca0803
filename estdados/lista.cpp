#include <algorithm>
#include <iostream>
#include <list>

int main(void) {
  std::list<int> lista;
  std::list<int>::iterator it;
  lista.push_back(3);
  lista.push_back(2);
  lista.push_back(1);
  for (auto i : lista) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  it = std::find(lista.begin(), lista.end(), 2);
  std::cout << *it << "\n";
  lista.insert(it, 4);
  for (auto i : lista) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  lista.sort();
  for (auto i : lista) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}