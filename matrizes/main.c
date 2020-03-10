#include <stdio.h>
#include <stdlib.h>

int main(){
  int **y, **x;
  int i, j;
  int nl=3, nc=4;
  printf("digite nl: "); scanf("%d", &nl);
  printf("digite nc: "); scanf("%d", &nc);

  // aloca array auxiliar
  y = (int**) malloc(nl * sizeof (int*));
  // aloca as linhas da matriz
  for(i=0; i<nl; i++){
    y[i] = (int*) malloc(nc*sizeof (int));
  }

  // aloca array auxiliar
  x = (int**) malloc(nl * sizeof (int*));
  // aloca as linhas da matriz
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc*sizeof (int));
  }

  // uso da matriz
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = i+j;
    }
  }

  // uso da matriz
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d ", y[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  // uso da matriz x
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = y[i][j];
    }
  }

  // uso da matriz
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d ", x[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<nl; i++){
    free(y[i]);
  }
  free(y);

  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);


  printf("Hello World!\n");
  return 0;
}
