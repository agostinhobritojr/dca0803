#include <iostream>

template <typename T>
T media(T a, T b){
  return (a+b)/2;
}

template <typename T, class U>
U media2(T a, T b){
  U ret;
  ret = (a+b)/2;
  return ret;
}

template <typename T, int N=4>
void print(T a){
  T v[N];
  for(int i = 0; i< N ; i++){
    v[i] = a;
    std::cout << v[i] << ",";
  }
  std::cout << "\n";
}


int main(){
  int a, b, c;
  float x, y, z;

  print<int, 6>(3);

  a=1, b=2;
  x=1, y=2;

  c = media<int>(a, x);
  std::cout << "mediaint   = " << c << "\n";

  z = media<float>(x, y);
  std::cout << "mediafloat = " << z << "\n";

  z = media2<int, float>(a, x);
  return 0;
}







