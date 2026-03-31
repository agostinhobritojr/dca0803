#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int **x, *y;
  int nl = 3, nc = 4;
  // aloca vetor auxiliar
  x = (int**)malloc(nl * sizeof(int*));
  // aloca as linhas em conjunto e guarda local em x[0]
  x[0] = (int*)malloc(nl * nc * sizeof(int));

  y = malloc(56);

  printf("x    = %p\n", x);
  printf("x[0] = %p\n", x[0]);
  // fixa os demais ponteiros para onde as linhas iniciam
  for (int i = 1; i < nl; i++) {
    x[i] = x[i - 1] + nc;
  }
  x[0][0] = 1;
  x[0][1] = 3;
  x[0][2] = 8;
  x[0][3] = 9;

  x[1][0] = 7;
  x[1][1] = 1;
  x[1][2] = -1;
  x[1][3] = 4;

  x[2][0] = 0;
  x[2][1] = 0;
  x[2][2] = 5;
  x[2][3] = 8;

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  printf("\nteste = %d\n\n", x[2][-8]);
  free(x[0]);
  free(x);
}