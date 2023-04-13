#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int **x;
  int nl=4, nc=4, i, j;
  // aloca vetor auxiliar para guardar os enderecos
  // das linhas que SERAO alocadas
  x = (int**) malloc(nl * sizeof(int*));

  // aloca as linhas
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc * sizeof(int));
  }
  srand(time(0));
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%10;
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }







  return 0;
}
