#include <stdio.h>

int main(){
  int x, *px;
  x = 3;
  px = &x; //px APONTA PARA x
  printf(" x  = %d\n", x);
  printf(" px = %p\n", px);
  printf("&px = %p\n", &px);
  *px = 4;
  printf("x  = %d\n", x);
  return 0;
}
