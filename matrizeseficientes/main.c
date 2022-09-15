#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para memcpy()

int main(){
  int **x, nl=4, nc=3, i, j;
  int **y;

  // aloca o array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  y = (int**) malloc(nl*sizeof(int*));
  // aloca a matriz e guarda o endereco retornado
  // no local que referencia a primeira linha
  // na matriz x
  x[0] = (int*) malloc(nl*nc*sizeof(int));
  y[0] = (int*) malloc(nl*nc*sizeof(int));

  // fixacao dos ponteiros para os inicios
  // de cada linha
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  for(i=1; i<nl; i++){
    y[i] = y[i-1] + nc;
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%10;
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = x[i][j];
    }
  }

//  memcpy(destino, origem, numbytes);
//  memcpy(y[0],x[0],nl*nc*sizeof(int));

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  // testes
  printf("x[2][0] = %p\n", &x[2][0]);
  printf("x[0][6] = %p\n", &x[0][6]);
  printf("x[2][-1] = %d\n", x[2][-1]);


  printf("passou!\n");
  free(x[0]);
  free(x);

  free(y[0]);
  free(y);

  return 0;
}
