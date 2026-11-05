#include <iomanip>
#include <iostream>

int main() {
  float x;
  x = 1.0;
  std::cout << std::fixed;
  std::cout << std::setprecision(1);

  std::cout << "x = " << x << std::endl;
  std::cout << "x = " << x << std::endl;
  return 0;
}
