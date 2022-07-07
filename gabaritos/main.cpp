#include <iostream>

// gabarito de funcao
template <typename T> // <class T>
T media(T a, T b){
  return (a+b)/2;
}

template <typename T, typename U> // <class T>
U media2(T a, T b){
  return (a+b)/2;
}

int main(){
  int x=3, y=4, z;
  float a=3, b=4, c;
  z = media<int>(x,y);
//  c = media<float>(x,y);
  z = media<int>(x,b);
  c = media2<int, float> (x,y);
 // c = media2(x,y);

  std::cout << "media      = " << z << std::endl;
  c = media<float>(a,b);
  std::cout << "mediafloat = " << c << std::endl;
  return 0;
}
