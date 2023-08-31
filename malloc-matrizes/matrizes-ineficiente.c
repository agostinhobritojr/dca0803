#include <stdlib.h>
#include <stdio.h>

int main(void){
  int **x, **y;
  int i, j, nl=4, nc=5; // nl linhas, nc colunas

  // aloca o vetor de ponteiros auxiliares
  x = (int**) malloc( nl * sizeof(int*) );
  // aloca cada linha da matriz  
  for(i=0; i<nl; i++){
    x[i]= (int*) malloc( nc * sizeof(int) );
  }


  y = (int**) malloc( nl * sizeof(int*) );
  // aloca cada linha da matriz
  for(i=0; i<nl; i++){
    y[i]= (int*) malloc( nc * sizeof(int) );
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = x[i][j]; // x[i][j] = *(*x+i)+j)
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d, ",y[i][j]);
    }
    printf("\n");
  }
  
  // primeiro libera os enderecos de cada linha
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  // depois libera o vetor de ponteiros auxiliares
  free(x);

  // primeiro libera os enderecos de cada linha
  for(i=0; i<nl; i++){
    free(y[i]);
  }
  // depois libera o vetor de ponteiros auxiliares
  free(y);


}






