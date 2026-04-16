#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int* myrealloc(int* antigo, int nantigo, int nnovo) {
  int* novo;
  if (nantigo == nnovo) {
    return antigo;
  }
  novo = (int*)malloc(nnovo * sizeof(int));
  if (nnovo > nantigo) {
    memcpy(novo, antigo, nantigo * sizeof(int));
  } else {
    memcpy(novo, antigo, nnovo * sizeof(int));
  }
  free(antigo);
  return novo;
}

int* myrandom(int n) {
  int *r, i;
  r = malloc(n * sizeof(int));
  for (i = 0; i < n; i++) {
    r[i] = rand() % 10 + 1;
  }
  return r;
}

int main(void) {
  int* x;
  srand(time(NULL));
  x = myrandom(5);
  for (int i = 0; i < 5; i++) {
    printf("%d, ", x[i]);
  }
  printf("x = %p\n", x);
  x = realloc(x, 10 * sizeof(int));
  printf("x = %p\n", x);
  printf("\n");
  for (int i = 0; i < 10; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  x = myrealloc(x, 10, 15);
  x[14] = 8;
  for (int i = 0; i < 15; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
}