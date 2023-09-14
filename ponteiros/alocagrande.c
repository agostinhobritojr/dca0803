#include <stdio.h>
#include <stdlib.h>

int main(void){
  long nl, nc, i, j, mult;
  int **x;
  nl = nc = 100000;
  mult = 4 * nl * nc;
  printf("mult = %ld\n", mult);
  x = malloc(nl *sizeof(int*));
  if(x == NULL){
    printf("nao alocou x\n");
    exit(0);
  }
  x[0] = malloc(nl * nc * sizeof(int));
  if(x[0] == NULL){
    printf("nao alocou x[0]\n");
    exit(0);
  }
  printf("passou\n");
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  printf("passou1\n");
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }
  printf("passou2\n");
  free(x[0]);
  free(x);
}