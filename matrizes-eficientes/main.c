#include <stdio.h>
#include <stdlib.h> // para malloc()
#include <string.h> // para memcpy()

int main(){
  int **x, **y;
  int nl=3, nc=2;

  // aloca array auxiliar para guardar os enderecos
  // das linhas
  x = (int**) malloc(nl * sizeof(int*));
  y = (int**) malloc(nl * sizeof(int*));

  // alocar toda a matriz e guardar o inicio dela
  // em x[0]
  x[0] = (int*) malloc(nl * nc * sizeof(int));
  y[0] = (int*) malloc(nl * nc * sizeof(int));

  // fixar os ponteiros das linhas
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
    y[i] = y[i-1] + nc;
  }

  x[0][0] = 2;  x[0][1] = 3;
  x[1][0] = 4;  x[1][1] = 5;
  x[2][0] = -1; x[2][1] = 8;

  // copia x -> y
  memcpy(y[0], x[0], nl*nc*sizeof(int) );

  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      printf("%2d, ", y[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("valor = %d\n\n", x[2][-3]);

  free(x[0]);
  free(x);

  free(y[0]);
  free(y);

  return 0;
}






