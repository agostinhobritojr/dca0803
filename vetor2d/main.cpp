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
  Vetor2d v;
  float alo, tam, ang;
 // v.x = -3; // x eh privada da classe Vetor2d
  v.setX(3);
  std::cout << v.getX();
  v.setY(4);
  alo = v.getY();
  v.print();
  tam = v.norma();
  ang = v.angulo();
}










