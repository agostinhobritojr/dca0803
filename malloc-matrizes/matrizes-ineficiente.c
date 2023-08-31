#include <stdlib.h>
#include <stdio.h>

int main(void){
  int **x;
  int i, j, nl=4, nc=5; // nl linhas, nc colunas

  // aloca o vetor de ponteiros auxiliares
  x = (int**) malloc( nl * sizeof(int*) );

  // aloca cada linha da matriz  
  for(i=0; i<nl; i++){
    x[i]= (int*) malloc( nc * sizeof(int) );
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d, ",x[i][j]);
    }
    printf("\n");
  }
}