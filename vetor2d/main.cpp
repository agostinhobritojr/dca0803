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
  // setY
  // getY
};
int main(void){
  Vetor2d v;
  v.setX(3); std::cout << v.getX();
}
