#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void){
  int *x, *y;
  int n, i;
  unsigned long tam;
//  tam = ULONG_MAX;
//  printf("tam = %lu\n", tam);
//  x = (int*) malloc (tam);

  n = 10; // no. de elementos
  x = (int*) malloc (n * sizeof(int));
  if(x == NULL){
    printf("nao alocou memoria\n");
    exit(0);
  }
  x[0] = 15;
  for(i=0; i<10; i++){
    x[i] = i + 1;
  }
//  y = x; // NAO REALIZA COPIA ALGUMA, APENAS UM ATALHO
  y = (int*) malloc (n * sizeof(int));
  for(i=0; i<10; i++){
    y[i] = x[i];
  }
  for(i=0; i<10; i++){
    printf("%d, ", y[i]);
  }
  printf("\n");
  printf("x = %p\n", x);
  free(x);
  free(y);
//  y = 2024;
//  free(y);
//  printf("x[9] = %d\n", x[9]); // PROIBIDO
  printf("passou 1\n");
  x = 0;
  free(x);
  printf("passou 2\n");
}
