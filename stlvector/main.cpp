#include <iostream>
#include <vector>

int main(void) {
  std::vector<int> v;
  v.push_back(10);
  v.push_back(8);
  v.push_back(-5);
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << "\n";
  v.pop_back();
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << "\n";
}
