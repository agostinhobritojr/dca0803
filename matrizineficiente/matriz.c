#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int **x, **xt;

  int nl=3, nc=4, i, j;
  int nlxt, ncxt;

  nlxt = nc; ncxt = nl;

  // aloca vetor auxiliar para guardar os enderecos
  // das linhas que SERAO alocadas
  x = (int**) malloc(nl * sizeof(int*));
  // aloca as linhas
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc * sizeof(int));
  }

  // aloca a matriz transposta
  xt = (int**) malloc(nlxt * sizeof(int*));
  // aloca as linhas
  for(i=0; i<nlxt; i++){
    xt[i] = (int*) malloc(ncxt * sizeof(int));
  }

  srand(time(0));
  for(i=0; i<nl; i++){
    printf("x[%d] = %p\n", i, x[i]);
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%10;
    }
  }

  for(i=0; i<nlxt; i++){
    for(j=0; j<ncxt; j++){
      xt[i][j] = x[j][i];
    }
  }
  // mostra matriz x
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  // mostra a matriz xt
  for(i=0; i<nlxt; i++){
    for(j=0; j<ncxt; j++){
      printf("%2d ", xt[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);

  for(i=0; i<nlxt; i++){
    free(xt[i]);
  }
  free(xt);
  printf("freeeeee!\n");
  for(i=0; i<nlxt; i++){
    for(j=0; j<ncxt; j++){
      printf("%2d ", xt[i][j]);
    }
    printf("\n");
  }


  return 0;
}
