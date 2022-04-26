#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nl=3, nc=4, i, j;
  // aloca vetor auxiliar
  x = malloc(nl * sizeof (int*));
  // aloca cada uma das linhas
  for(i=0; i<nl; i++){
    x[i] = malloc(nc * sizeof(int));
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%99;
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);
  return 0;
}
