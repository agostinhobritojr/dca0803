#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x, nl=4, nc=3, i, j;

  // aloca o array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  // aloca a matriz e guarda o endereco retornado
  // no local que referencia a primeira linha
  // na matriz x
  x[0] = (int*) malloc(nl*nc*sizeof(int));

  // fixacao dos ponteiros para os inicios
  // de cada linha
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }

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
  printf("\n");
  // testes
  printf("x[2][0] = %p\n", &x[2][0]);
  printf("x[0][6] = %p\n", &x[0][6]);
  printf("x[2][-1] = %d\n", x[2][-1]);


  printf("passou!\n");
  free(x[0]);
  free(x);

  return 0;
}
