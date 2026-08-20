#include <stdio.h>

int main(){
  int *px, *py, x, y;
  x = 2;
  px = &x;
  py = &y;
  y = *px;
  printf("tamanho = %d\n", sizeof(int));
  printf("tamanho = %d\n", sizeof(x));
  printf("tamanho = %d\n", sizeof(int*));
  printf("&px = %p\n", &px);
  printf("&py = %p\n", &py);
  printf("&x  = %p\n", &x);
  printf("&y  = %p\n", &y);
  return 0;
}
