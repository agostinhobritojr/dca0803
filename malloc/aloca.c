#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *x, n=10, i;
  int *y;

  // aloca um bloco de memoria
  x = (int*) malloc(n * sizeof(int));
  if(x == NULL){
    printf("Erro: memoria insuficiente\n");
    exit(1);
  }

  printf("x =  %p\n", x);
  printf("&x = %p\n", &x);

  x[0]= 3;
  for(i=0; i<n; i++){
    x[i] = i;
  }
  y = x;
  for(i=0; i<n; i++){
    printf("x[%d] = %d\n", i, y[i]);
  }
  // libera a memoria alocada
  free(x);
  x = NULL;
  free(x);
}