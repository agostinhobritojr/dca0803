#include <iostream>
#include <cmath>

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
  void setY(float y_){
    y = y_;
  }
  float getY(){
    return y;
  }
  void print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
  }
  float norma(){
    return std::sqrt(x*x + y*y);
  }
  float angulo(){
    return std::atan2(y, x)*180/M_PI;
  }
};
int main(void){
  Vetor2d v; // v eh um objeto da classe Vetor2d
  v.setX(3); 
  std::cout << v.getX() << std::endl;
  v.setY(4);
  v.print();
  std::cout << "norma = " << v.norma() << std::endl;
  std::cout << "angulo = " << v.angulo() << std::endl;
}
