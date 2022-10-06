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
    std::cout << "(" << x << "," << y << ")";
  }
  float norma(){
    return std::sqrt(x*x+y*y);
  }
  float angulo(){
//    return std::atan(y/x)*180/3.14;
    return std::atan2(y,x)*180/3.14;
  }
};

int main(void){
  Vetor2d v;
  float alo, tam, ang;
 // v.x = -3; // x eh privada da classe Vetor2d
  v.setX(0);
  std::cout << v.getX();
  v.setY(4);
  alo = v.getY();
  v.print();
  tam = v.norma();
  std::cout << "norma = " << tam << std::endl;
  ang = v.angulo();
  std::cout << "angul = " << ang << std::endl;
}










