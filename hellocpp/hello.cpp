#include <iostream>

int main(void){
  int x = 3;
  float y = 4;
  int i, n;
  std::cout << "digite n: ";
  std::cin >> n; // scanf("%d", &n);
  for(i=0; i<n; i++){
    std::cout << "i=" << i << "\n";
  }
  std::cout << "x = " << x << " e y = " << y << "\n";  
//  std::cout << "Alo, C++!\n";
  return 0;
}
