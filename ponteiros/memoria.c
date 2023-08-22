#include <stdio.h>

int main(void){
  int x=3, y=4, z=3;
  int *px;
  px = &x;

  printf("&x - %p\n", &x);
  printf("&y - %p\n", &y);
  printf("&z - %p\n", &z);

  printf("px = %p\n", px);
  printf("*px = %d\n", *px);
  px = px + 4;
  printf("px = %p\n", px);
  printf("*px = %d\n", *px);
}
