#include <iostream>

class Alo{
private:
  int a;
public:
  void setA(int a){
    this->a = a;
  }
  void print(void){
    std::cout << "print(" << this << ")\n";
  }
};

int main () {
  Alo a, *p;
  a.setA(3);
  p = &a;
  std::cout << p << std::endl;
  a.print();
  p->print();
//  (*p).print();
  return 0;
}






