#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int **x;
  int nl = 15, nc = 20, i, j;
  // 1. alocar vetor de ponteiros auxiliar
  x = malloc(nl * sizeof(int *));
  if (x == NULL) {
    exit(0);
  }
  // 2. alocar as linhas da matriz
  for (i = 0; i < nl; i++) {
    x[i] = malloc(nc * sizeof(int));
  }
  for (i = 0; i < nl; i++) {
    for (j = 0; j < nc; j++) {
      x[i][j] = rand() % 100;
    }
  }

  for (i = 0; i < nl; i++) {
    for (j = 0; j < nc; j++) {
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  // 1. liberar as linhas alocadas
  for (i = 0; i < nl; i++) {
    free(x[i]);
  }
  // 2. liberar o vetor de ponteiros auxiliar
  free(x);
  x = NULL;
}