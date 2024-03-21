#include <stdio.h>
#include <stdlib.h>

int main(void){
  int **x;
  int nl=5, nc=4;
  int i, j;
  // aloca o array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  // aloca o bloco de mem para guardar a matriz inteira
  x[0] = (int*) malloc(nl*nc*sizeof(int));
  // fixa os ponteiros para as linhas
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%100;
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  x[0][14] = -1; // x[3][2]
  x[2][6] = -1; // x[3][2]
  x[4][-2] = -1; // x[3][2]

  printf("\n");
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
}
