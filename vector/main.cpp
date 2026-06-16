#include <iostream>
#include <vector>

int main() {
  std::vector<int> v, w(10, 100);
  std::vector<int>::iterator it;

  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  for (it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << " ";
  }

  v.pop_back();

  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << "\n";

  return 0;
}
