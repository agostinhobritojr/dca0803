#include <iostream>
#include <vector>

int main(void) {
  std::vector<std::vector<int>> m(4, std::vector<int>(6, 38));
  for (int i = 0; i < m.size(); i++) {
    for (int j = 0; j < m[i].size(); j++) {
      std::cout << m[i][j] << " ";
    }
    std::cout << "\n";
  }
}