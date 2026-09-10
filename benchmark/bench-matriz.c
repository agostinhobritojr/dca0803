#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  clock_t t;
  int i;
  int *src, *dst, size;
  // size - numero de linhas da matriz
  // src - matriz de origem
  // dst - matriz de destino
  size = 400;

  src = malloc(4 * sizeof(int) * size);

  /* copyE */
  printf("Calculating...\n");
  t = clock();
  for (i = 0; i < 500000; i++) {
    memcpy(dst, src, 4 * size * sizeof(int));
  }
  t = clock() - t;
  printf("copyE: %d clicks (%f seconds).\n", (int)t,
         ((float)t) / CLOCKS_PER_SEC);

  free(src);
  free(dst);

  return 0;
}
