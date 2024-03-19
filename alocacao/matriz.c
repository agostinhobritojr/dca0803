#include <stdio.h>
#include <stdlib.h>

int main(void){
  int **x, nl=4, nc=5, i, j;
  x = (int **) malloc(nl*sizeof(int*));
  for(i=0; i<nl; i++){
    x[i] = (int *) malloc(nc*sizeof(int));
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d ", x[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);
}
