#include <stdio.h>
#include <stdlib.h>

int* myrealloc(int* y, int oldsize, int newsize) {
  int* z;
  // newsize igual
  if (oldsize == newsize) {
    return y;
  }
  // newsize menor
  if (newsize < oldsize) {
    z = malloc(newsize * sizeof(int));
    memcpy(z, y, newsize * sizeof(int));
    free(y);
    return (z);
  }
  // newsize maior
  z = calloc(newsize * sizeof(int));
  memcpy(z, y, oldsize * sizeof(int));
  free(y);
  return (z);
}

int main(void) {
  int *x, m = 3, n = 5, i;
  x = malloc(m * sizeof(int));
  for (i = 0; i < m; i++) {
    x[i] = i + 1;
  }
  for (i = 0; i < m; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  x = realloc(x, n * sizeof(int));
  for (i = 0; i < n; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
}