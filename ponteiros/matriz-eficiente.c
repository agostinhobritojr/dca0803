#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int **x;
  int nl = 4, nc = 3, i, j;
  // 1. alocar vetor de ponteiros auxiliar
  x = malloc(nl * sizeof(int *));
  // 2. alocar as linhas da matriz
  x[0] = malloc(nl * nc * sizeof(int));
  // 3. fixacao dos ponteiros para as linhas
  for (i = 1; i < nl; i++) {
    x[i] = x[i - 1] + nc;
  }
  for (i = 0; i < nl; i++) {
    for (j = 0; j < nc; j++) {
      x[i][j] = rand() % 100;
    }
  }
  x[0][-1] = 9;
  for (i = 0; i < nl; i++) {
    for (j = 0; j < nc; j++) {
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  // 1. liberar as linhas alocadas
  free(x[0]);
  // 2. liberar o vetor de ponteiros auxiliar
  free(x);
  x = NULL;
}