#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  int** x;
  int nl, nc;
  time_t t;
  nl = 200;
  nc = 300;
  // alocar array auxiliar
  x = (int**)malloc(nl * sizeof(int*));
  // alocar o bloco completo da matriz
  // e armazenar o endereco dele em x[0] <- A
  x[0] = (int*)malloc(nl * nc * sizeof(int));
  for (int i = 1; i < nl; i++) {
    x[i] = x[i - 1] + nc;
  }

  t = clock();
  for (int z = 0; z < 5000; z++) {
    for (int i = 0; i < nl; i++) {
      for (int j = 0; j < nc; j++) {
        x[i][j] = 0;
      }
    }
  }
  t = clock() - t;
  printf("tempo: %d clicks (%f seconds).\n", (int)t,
         ((float)t) / CLOCKS_PER_SEC);

  t = clock();
  for (int z = 0; z < 5000; z++) {
    for (int j = 0; j < nc; j++) {
      for (int i = 0; i < nl; i++) {
        x[i][j] = 0;
      }
    }
  }
  t = clock() - t;
  printf("tempo: %d clicks (%f seconds).\n", (int)t,
         ((float)t) / CLOCKS_PER_SEC);

  free(x[0]);
  free(x);

  return 0;
}
