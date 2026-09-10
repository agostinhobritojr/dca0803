#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int *x, *y;
  int n = 10;
  x = (int*)malloc(n * sizeof(int));
  y = (int*)malloc(n * sizeof(int));
  if (x == NULL) {
    printf("alocacao falhou\n");
    exit(0);
  }
  printf("&x = %p\n", &x);
  printf(" x = %p\n", x);
  x[0] = -16;
  
  for (int i = 0; i < n; i++) {
    y[i] = x[i];
  }

  memcpy(y, x, n * sizeof(int));

  for (int i = 0; i < 10; i++) {
    printf("%d, ", y[i]);
  }
  y[1] = 4;
  printf("\n");
  for (int i = 0; i < 10; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
  free(y);
  // x = NULL;
}