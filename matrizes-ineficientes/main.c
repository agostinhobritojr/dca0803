#include <stdio.h>
#include <stdlib.h> // para malloc()

int main(){
  int **x, nl=3, nc=2;

  // alocacao do array auxiliar
  x = malloc(nl * sizeof(int*));
  // aloca as linhas da matriz
  for(int i=0; i<nl; i++){
    x[i] = malloc(nc * sizeof(int));
  }
  x[0][0] = 2;  x[0][1] = 3;
  x[1][0] = 4;  x[1][1] = 5;
  x[2][0] = -1; x[2][1] = 8;

  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      printf("%d, ", x[i][j]);
    }
    printf("\n");
  }
  // libera as linhas
  for(int i=0; i<nl; i++){
     free(x[i]);
  }
  // libera o vetor auxiliar
  free(x);
  return 0;
}









