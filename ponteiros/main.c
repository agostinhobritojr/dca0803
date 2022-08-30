#include <stdio.h>

int main(void){
  int *px, x, y;
  x = 2;
  px = &x; // px APONTA PARA x
  y = *px;

  printf("*px = %d\n", *px);
  printf("px = %p\n", px);
  printf("&x = %p\n", &x);  
  printf("&y = %p\n", &y);
  printf("&px = %p\n", &px);  

}