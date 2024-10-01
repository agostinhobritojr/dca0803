#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *x, y[10];
  int n, i;
  n = 10;
  x = (int *)malloc(n * sizeof(int));
  x[0] = 3;
  x[1] = 2;
  x[2] = -9;
  x[3] = -8;
  for (i = 0; i < n; i++) {
    //  printf("x[%d]= %d\n", i, x[i]);
  }
  {
    printf("&n = %p\n", &n);
    printf("&i = %p\n", &i);
    printf("&y = %p\n", &y);
    printf("&x = %p\n", &x);
    printf(" x = %p\n", x);
    printf("\n\n");

    printf(" x+1 = %p\n", x + 1);
    printf(" x+2 = %p\n", x + 2);
    printf(" x+3 = %p\n", x + 3);

    printf(" *(x+1) = %d\n", *(x + 1));
    printf(" *(x+2) = %d\n", *(x + 2));
    printf(" *(x+3) = %d\n", *(x + 3));
    printf("\n");

    printf(" x+1 = %p\n", x + 1);
    printf(" x+1 = %p\n", &x[1]);
  }
  free(x);
  free(x);
}