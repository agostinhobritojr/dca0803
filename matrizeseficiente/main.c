#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nl, nc;
  int i, j;

  nl = 3; nc = 4;

  // aloca o array auxiliar
  x = (int**) malloc(nl * sizeof (int*));

  // aloca um bloco de memoria para
  // guardar os dados da matriz
  x[0]= (int*) malloc(nl * nc * sizeof (int));

  // ajusta os elementos do array auxiliar
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d, ",x[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  x[2][-3]=-1;

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d, ",x[i][j]);
    }
    printf("\n");
  }
  free(x[0]);
  free(x);

  return 0;
}



