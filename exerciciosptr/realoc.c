#include <stdlib.h>
#include <stdio.h>

void* myrealloc(void*, int oldsize, int newsize){
  
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
  x = realloc(x, n*sizeof(int));
  for (i = 0; i < n; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
}