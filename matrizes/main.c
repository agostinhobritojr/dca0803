#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x, nl=4, nc=5, i, j;
  int **y;

  // aloca o array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  // aloca as linhas
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc*sizeof(int));
  }

  // usa a matriz
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%10+1;
    }
  }
  y = x;
  printf("x = %p\n", x);
  printf("y = %p\n", y);
  // usa a matriz
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }

  // libera a memoria
  // PRIMEIRAMENTE libera as linhas
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  // SEGUDAMENTE libera o vetor auxiliar
  free(x);

  return 0;
}
