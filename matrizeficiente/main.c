#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nl=3, nc=4, i;

  x = (int**) malloc(nl * sizeof(int*));
  x[0] = (int*) malloc(nc*nl*sizeof(int));

  // fixa os ponteiros para as linhas
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }

  free(x[0]);
  free(x);

  x = NULL;

  return 0;
}
