#include <stdio.h>

int main(){
  int x;
  int *px;

  x = 3;
  printf("x = %d\n", x);
  printf("end de x = %p\n", &x);
  printf("px = %ld\n", px);
  px = &x;
  printf("px = %p\n", px);
  printf("end de px = %p\n", &px);

  printf("x = %d\n", *px);
  // conteudo de px igual a 4
  *px = 4;
  printf("x = %d\n", x);

  return 0;
}
