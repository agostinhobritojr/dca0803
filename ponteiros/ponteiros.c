#include <stdio.h>

int main(void) {
  int x, y, *px, *py;
  double *pz, z;
  x = 20;
  y = 30;
  z = 4;
  px = &x;
  pz = &z;
  printf("valor = %d\n", *px);
  px++;
  printf("\n");
  printf("valor = %d\n", *px);

  //  y = *px;
  printf("&x  = %p\n", &x);
  printf("&y  = %p\n", &y);
  printf("&px = %p\n", &px);
  printf("&py = %p\n", &py);
  printf("\n");
  printf("px = %p\n", pz);
  pz = pz + 1;
  printf("px = %p\n", pz);
  printf("\n");

  printf("px  = %p\n", px);
  printf("tam(x)  = %ld\n", sizeof(x));
  printf("tam(x)  = %ld\n", sizeof(int));
  printf("tam(px) = %ld\n", sizeof(px));
}