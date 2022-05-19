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
  void print(){
    std::cout << "(" << x << "," << y << ")";
  }
  void setY(float y_){
    y = y_;
  }
  float getY(){
    return y;
  }
  float tamanho(void){
    return std::sqrt(x*x + y*y);
  }
};

int main(void){
  Vetor2d v;
  float tam;

  v.setX(3); v.setY(4);

  tam = v.tamanho();

  std::cout << "tamanho = " << tam << "\n";

  v.print();
  std::cout << "\n";
}



