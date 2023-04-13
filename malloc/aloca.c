#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
  int *x, n = 100000, i;
  int *y;

  // aloca um bloco de memoria
  x = (int *)malloc(n * sizeof(int));
  if (x == NULL) {
    printf("Erro: memoria insuficiente\n");
    exit(1);
  }
  y = (int *)malloc(n * sizeof(int));
  if (y == NULL) {
    printf("Erro: memoria insuficiente\n");
    exit(1);
  }

  printf("x =  %p\n", x);
  printf("&x = %p\n", &x);

  x[0] = 3;
  for (i = 0; i < n; i++) {
    x[i] = i;
  }

  // benchmark
  clock_t t;

  t = clock();
  for (i = 0; i < n; i++) {
    y[i] = x[i];
  }
  t = clock() - t;
  printf("It took me %d clicks (%f seconds).\n", t,
         ((float)t) / CLOCKS_PER_SEC);

  t = clock();
  memcpy(y, x, n * sizeof(int));
  t = clock() - t;
  printf("It took me %d clicks (%f seconds).\n", t,
         ((float)t) / CLOCKS_PER_SEC);




 /* for (i = 0; i < n; i++) {
    printf("y[%d] = %d\n", i, y[i]);
  }
  */
  // libera a memoria alocada
  free(x);
  x = NULL;
  free(y);
  y = NULL;
}