#include <iostream>

class Vetor2d{
private:
  float x;
public:
  void setX(float _x){
    x = _x;
  }
  void showThis(){
    std::cout << this << std::endl;
  }
};

int main(){
  Vetor2d *v, v1;
  v = &v1;
  v1.setX(4);
  v->setX(5);

  v->showThis();
  return 0;
}




