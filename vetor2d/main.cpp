#include <iostream>

class Vetor2d{
private:
  float x, y;
public:
  void setX(float x_){
    x = x_;
  }
  float getX(){
    return x;
  }
};
int main(void){
  Vetor2d v; // v eh um objeto da classe Vetor2d
  v.setX(3); 
  std::cout << v.getX() << std::endl;
}
