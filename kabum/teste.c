#include <stdio.h>
#include <stdlib.h>

#define TAM 100000

int main(void){
 // int x[TAM][TAM];
  int **x;
  int i, j;

  x = (int**) malloc(TAM * sizeof(int*));
  x[0] = (int*) malloc(TAM * TAM * sizeof(int));
  for(i=1; i<TAM; i++){
    x[i] = x[i-1] + TAM;
  }

  for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
      x[i][j] = 0;
    }
  }

/*  for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
      printf("%d ", x[i][j]);
    }
    printf("\n");
  }*/
  free(x[0]);
  free(x);
  printf("terminou\n");
}