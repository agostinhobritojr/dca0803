#include <stdio.h>

int main(void) {
  int *px, x, y;
  x = 2;

  printf("num = %d\n", 0x100);

  printf("endereco de  x: %p\n", &x);
  printf("endereco de  y: %p\n", &y);
  printf("endereco de px: %p\n", &px);

  px = &x; // px aponta para x
  printf("valor de    px: %p\n", px);

  y = *px; // y recebe o valor de x
  printf("valor    de  x: %d\n", x);
  printf("conteudo de px: %d\n", *px);

  printf("endereco de px: %p\n", px);
  px = px + 2;
  printf("endereco de px: %p\n", px);
  printf("conteudo de px: %d\n", *px);

}
