#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int **x, nl=4, nc=5, i, j;
  int nlx = 4, ncx = 5;
  int nlz, ncz;
  int **y, **z;
  
  nlz = ncx;
  ncz = nlx;

  // aloca a "matriz x"
  // aloca array auxiliar
  x = (int **) malloc(nl*sizeof(int*));
  // aloca as linhas da matriz
  for(i=0; i<nl; i++){
    x[i] = (int *) malloc(nc*sizeof(int));
  }
  // aloca a "matriz z"
  // aloca array auxiliar
  z = (int **) malloc(nlz*sizeof(int*));
  // aloca as linhas da matriz
  for(i=0; i<nlz; i++){
    z[i] = (int *) malloc(ncz*sizeof(int));
  }

  // aloca a "matriz y"
  // aloca array auxiliar
  y = (int **) malloc(nl*sizeof(int*));
  // aloca as linhas da matriz
  for(i=0; i<nl; i++){
    y[i] = (int *) malloc(nc*sizeof(int));
  }

  srand(time(NULL));
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand() % 100;
    }
  }
  // copia x para y
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = x[i][j];
    }
  }

  // calcula a transposta de x -> z
  for(i=0; i<nlz; i++){
    for(j=0; j<ncz; j++){
      z[i][j] = x[j][i];
    } 
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  y[2][2] = 15;
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i=0; i<nlz; i++){
    for(j=0; j<ncz; j++){
      printf("%2d ", z[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);
  for(i=0; i<nl; i++){
    free(y[i]);
  }
  free(y);
  for(i=0; i<nlz; i++){
    free(z[i]);
  }
  free(z);
}
