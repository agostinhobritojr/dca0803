#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int *x, *y;
  int n = 10;

  // aloca memoria de tamanho solicitado
  x = (int*)malloc(n * sizeof(int));
  y = (int*)malloc(n * sizeof(int));
  // x = (int*)malloc(16000000000000);
  if (x == NULL) {
    printf("nao alocou memoria");
    exit(0);
  }
  // x = (int*)0x100;
  for (int i = 0; i < 10; i++) {
    x[i] = i + 1;
  }
  // nao compia. apenas cria atalho
  //   y = x;

  /*
  for (int i = 0; i < 10; i++) {
    y[i] = x[i];
  }
  */

  memcpy(y, x, n * sizeof(int));

  x[2] = -1;

  for (int i = 0; i < n; i++) {
    printf("%d,", y[i]);
  }
  printf("\n");
  // libera memoria alocada
  free(x);
  x = NULL;

  free(y);
  y = NULL;
  printf("x    = %p\n", x);
  free(x);
  /*  printf("main = %p\n", main);
    printf("&n   = %p\n", &n);
    printf("&x   = %p\n", &x);
    printf("x    = %p\n", x);
  */
}