#include <stdlib.h>
#include <stdio.h>

int main(void){
  int **x;
  int i, j, nl=3, nc=4;

  x = (int**) malloc(nl * sizeof(int*)); 
  // guarda o local onde comeca a matriz
  // COINCIDENTEMENTE, eh a linha 0 
  x[0] = (int*) malloc(nl * nc * sizeof(int));
  
  // calcula os enderecos intermediarios onde 
  // as outras linhas comecam
  for(i=1; i < nl; i++){
    x[i] = x[i-1] + nc;
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

  free(x[0]);
  free(x);
}