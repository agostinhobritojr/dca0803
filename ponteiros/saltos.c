#include <stdio.h>

int main(void){
  double x, *px;
  x = 10;
  px = &x;
  *px = 8;
//  printf("*px = %d\n", *px);
  printf("px  = %p\n", px);
  px = px + 1;
  printf("px  = %p\n", px);
  px = px + 2;
  printf("px  = %p\n", px);
}