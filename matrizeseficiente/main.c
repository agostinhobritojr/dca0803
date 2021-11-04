#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memcpy()
#include <time.h> // clock()
int main(){
  int **x;
  int nl, nc;
  int i, j, k;
  int **y;
  clock_t t;

  nl = 3; nc = 4;

  // aloca o array auxiliar
  x = (int**) malloc(nl * sizeof (int*));
  // aloca um bloco de memoria para
  // guardar os dados da matriz
  x[0]= (int*) malloc(nl * nc * sizeof (int));
  // ajusta os elementos do array auxiliar
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }

  // aloca o array auxiliar
  y = (int**) malloc(nl * sizeof (int*));
  // aloca um bloco de memoria para
  // guardar os dados da matriz
  y[0]= (int*) malloc(nl * nc * sizeof (int));
  // ajusta os elementos do array auxiliar
  for(i=1; i<nl; i++){
    y[i] = y[i-1] + nc;
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }

  // copia com loop aninhado
  t = clock();
  for(k=0; k<500000; k++){
    for(i=0; i<nl; i++){
      for(j=0; j<nc; j++){
        y[i][j] = x[i][j];
      }
    }
  }
  t = clock() - t;
  printf ("levou %f seconds.\n",
          ((float)t)/CLOCKS_PER_SEC);


  // copia com loop unico
  t = clock();
  for(k=0; k<500000; k++){
    for(i=0; i<nl*nc-1; i++){
      y[0][i] = x[0][i];
    }
  }
  t = clock() - t;
  printf ("levou %f seconds.\n",
          ((float)t)/CLOCKS_PER_SEC);

  // copia com memcpy
  t = clock();
  for(k=0; k<500000; k++){
    memcpy(y[0],x[0], nl*nc*sizeof (int));
  }
  t = clock() - t;
  printf ("levou %f seconds.\n",
          ((float)t)/CLOCKS_PER_SEC);

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d, ",y[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  // x[2][-3]=-1;

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d, ",x[i][j]);
    }
    printf("\n");
  }

  free(x[0]);
  free(x);

  free(y[0]);
  free(y);


  return 0;
}



