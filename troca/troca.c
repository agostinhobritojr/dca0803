#include <stdio.h>

void troca(int a, int b){
  static int tmp=0;
  printf("a = %d; b = %d\n", a, b);
  tmp = a; 
  a = b; 
  b = tmp;
  printf("a = %d; b = %d\n", a, b);
}

int main(void){
  int x=5, y=4;
  printf("x = %d; y = %d; z = %d\n", x, y, z);
  troca(x, y);
  printf("x = %d; y = %d; z = %d\n", x, y, z);
  return 0;
}

void troca(int a, int b);

