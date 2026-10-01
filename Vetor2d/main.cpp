#include <iostream>
#include <cmath>

class Vetor2d{
private:
  float y;
  float x;
public:
  void setX(float x_){
    x = x_;
  }
  float getX(void){
    return x;
  }
  void setY(float y_){
    y = y_;
  }
  float getY(void){
    return y;
  }
  void print(void){
    std::cout << "(" << x << "," << y << ")";
  }
  float norma(void){
    return std::sqrt(x*x+y*y);
  }
  Vetor2d unitario(void){
    Vetor2d retorno;
    retorno.x = x/norma();
    retorno.y = y/norma();
    return retorno;
  }
  float angulo(){
    return atan2(y, x) * 180/M_PI;
  }
};

int main(){
  Vetor2d v1, v2, v3;
  v1.setX(3);
  v1.setY(4);
  std::cout << v1.angulo() << std::endl;

  std::cout << "v1 = ";
  v1.print();
  std::cout << "\n";


  return 0;
}
