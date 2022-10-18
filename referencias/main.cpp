#include <iostream>

// passagem de parametro por REFERENCIA
void func(int &a){
  std::cout << "a= " << a << std::endl;
  a = 4;
  std::cout << "a= " << a << std::endl;
  std::cout << "end a = " << &a << std::endl;
}

int main(){
  int x=3;
  std::cout << "end x = " << &x << std::endl;
  std::cout << "x= " << x << std::endl;
  func(x);
  std::cout << "x= " << x << std::endl;
  return 0;
}
