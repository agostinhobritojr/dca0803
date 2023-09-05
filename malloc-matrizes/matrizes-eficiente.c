#include <stdlib.h> // para malloc()/free()
#include <stdio.h> // para printf()
#include <string.h> // para memcpy()

int main(void){
  int **x, **y, z[3][4];
  int i, j, nl=3, nc=4;

  printf("endereco = %p\n", &z[0][0]);
  printf("endereco = %p\n", &z[0][1]);
  printf("endereco = %p\n", &z[0][2]);
  printf("endereco = %p\n", &z[0][3]);
  printf("endereco = %p\n", &z[1][0]);
  printf("endereco = %p\n", &z[0][4]);

  x = (int**) malloc(nl * sizeof(int*)); 
  y = (int**) malloc(nl * sizeof(int*)); 
  // guarda o local onde comeca a matriz
  // COINCIDENTEMENTE, eh a linha 0 
  x[0] = (int*) malloc(nl * nc * sizeof(int));
  y[0] = (int*) malloc(nl * nc * sizeof(int));
  //
  // free(x[0]); free(x);
  //
  // calcula os enderecos intermediarios onde 
  // as outras linhas comecam
  for(i=1; i < nl; i++){
    x[i] = x[i-1] + nc;
    y[i] = y[i-1] + nc;
//    x[i] = x[0] + i*nc;
  }
  
  x[0][0] = 1; x[0][1] = 2; x[0][2] = 0; x[0][3] = 3;
  x[1][0] = 3; x[1][1] = 5; x[1][2] = 9; x[1][3] = 4;
  x[2][0] = 1; x[2][1] = 1; x[2][2] = 8; x[2][3] = 3;
  
  for(i=0; i < nl; i++){
    for(j=0; j < nc; j++){
      printf("%d ", x[i][j]);
    }
    printf("\n");
  }
  // copia x -> y
  memcpy(y[0], x[0], nl * nc * sizeof(int));
  printf("valor = %d\n", y[2][-1]);

  /*
  for(i=0; i < nl; i++){
    for(j=0; j < nc; j++){
      y[i][j] = x[i][j];
    }
  }*/

  free(x[0]); free(x);
  free(y[0]); free(y);
}











