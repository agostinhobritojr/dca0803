#include <iostream>

template <typename T>
T media(T a, T b) {
  return (a + b) / 2;
}

template <typename T, typename U>
U media2(T a, T b) {
  U c;
  c = (a + b) / 2;
  return c;
}

template <typename T, typename U, int N = 10>
T media3(U a, U b) {
  U c[N];
  for (int i = 0; i < N; i++) {
    std::cout << c[i] << ",";
  }
  std::cout << std::endl;
  return (a + b) / 2;
}

int main(void) {
  int x, y, z;
  float a, b, c;
  x = 1;
  y = 2;
  a = 1;
  b = 2;

  c = media3<int, float, 4>(x, y);
  c = media3<int, float>(x, y);

  std::cout << "media(x,b) = " << c << std::endl;

  z = media<int>(x, y);
  std::cout << "media(x,y) = " << z << std::endl;
  z = media(x, y);
  std::cout << "media(x,y) = " << z << std::endl;

  c = media<float>(a, b);
  std::cout << "media(a,b) = " << c << std::endl;
  c = media(a, b);
  std::cout << "media(a,b) = " << c << std::endl;
}