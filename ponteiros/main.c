#include <stdio.h>

int main(void){
  int *px, x, y;
  x = 2;
  px = &x; // px APONTA PARA x
  y = *px;

  printf("*px = %d\n", *px);
}