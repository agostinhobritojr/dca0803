#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x, **y;
  int nl=3, nc=4, i, j;
  x = malloc(nl*sizeof (int*));
  x[0] = malloc(nl*nc*sizeof (int));
  y = malloc(nl*sizeof (int*));
  y[0] = malloc(nl*nc*sizeof (int));
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  for(i=1; i<nl; i++){
    y[i] = y[i-1] + nc;
  }
  for(i=0; i<nl*nc; i++){
    x[0][i] = i+1;
  }
  memcpy(y[0], x[0], nl*nc*sizeof(int));

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d, ", x[i][j]);
    }
    printf("\n");
  }
  printf("\nx[%d][%d]=%2d\n", 2, -3, x[2][-3]);
  free(x[0]);
  free(x);
  return 0;
}
