#include <iostream>

/* Essa declaracao soh influencia
 * a funcao IMEDIATAMENTE posterior
 */
template <typename T>
T media(T a, T b){
  return (a+b)/2;
}

int main(){
  int a, b, c;
  float x, y, z;
  a = 1; b = 2;
  x = 1; y = 2;

  std::cout << media<int>(a,b) << std::endl;
  std::cout << media<float>(x,y) << std::endl;

  /*
  std::cout << media(a,b) << std::endl;
  std::cout << media(x,y) << std::endl;
  */

  std::cout << media<float>(a,y) << std::endl;


  return 0;
}
