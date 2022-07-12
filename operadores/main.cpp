#include <iostream>

using namespace std;

class Vetor2d{
  float x, y;
public:
  Vetor2d(float mx=0, float my=0){
    x = mx; y = my;
  }
  Vetor2d operator + (Vetor2d v){
    Vetor2d ret;
    ret.x = x+v.x;
    ret.y = y+v.y;
    return ret;
  }
  void operator = (float a){
    x = a; y = a;
  }
  // funcao com relacao proxima com a classe
  // funcao friend (amiga) tem acesso aos
  // campos privados da classe
  // ATENCAO: operator << NAO É MEMBRO DA CLASSE
  friend ostream& operator<<(std::ostream& os, Vetor2d &v){
    os << "(" << v.x << "," << v.y << ")";
    return os;
  }
};

int main(){
  Vetor2d v1(3,4), v2(-1,2), v3;
  v3 = 4;
  std::cout << "x = " << 4 << "\n";
  std::cout << "v3 = " << v3 << "\n" ;
  v3 = v1+v2;
  return 0;
}




