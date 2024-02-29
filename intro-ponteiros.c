#include <stdio.h>

int main(void){
  int *px, x, y;
  x = 2;
  px = &x;
  y = *px;
  printf(" x  = %d\n", x);
  printf("&x  = %p\n", &x);
  printf("&y  = %p\n", &y);
  printf("&px = %p\n", &px);
}