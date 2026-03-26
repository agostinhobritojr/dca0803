#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(void) {
  int** x;
  int nl = 4, nc = 5;
  float a;
  a = NULL;

  // aloca array auxiliar para guardar
  // os enderecos das linhas
  x = (int**)malloc(nl * sizeof(int*));

  // aloca as linhas da matriz
  for (int i = 0; i < nl; i++) {
    x[i] = (int*)malloc(nc * sizeof(int));
  }

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      x[i][j] = i + j;
    }
  }

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      printf("%2d ", x[i][j]);
    }
    //  printf("\n");
  }

  // libera as memorias das linhas
  for (int i = 0; i < nl; i++) {
    free(x[i]);
  }
  // libera vetor de ponteiros auxiliares
  free(x);
}
