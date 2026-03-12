#include <stdio.h>

int main() {
  int x, y, *px, *py;
  static int z = 0;
  px = &x;
  py = &y;
  printf(" main: %p\n", &main);
  printf(" &x: %p\n", &x);
  printf(" &y: %p\n", &y);
  printf(" &z: %p\n", &z);
  printf("&px: %p\n", &px);
  printf("&py: %p\n", &py);
  printf(" px: %p\n", px);
  printf(" py: %p\n", py);
  return 0;
}