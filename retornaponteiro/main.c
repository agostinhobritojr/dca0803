#include <stdio.h>
#include <stdlib.h>

int* aleatorio(int n){
  int *r, i;
  r = malloc(n * sizeof(int));
  for(i=0; i<n; i++){
    r[i] = rand()%10;
  }
  return r;
}

int main(){
  int *x, i;
//  x = aleatorio(5);
//  x = malloc(5*sizeof (int));
  x = calloc(5, sizeof (int));
  for(i=0; i<5; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  x = realloc(x, 10);
  for(i=0; i<10; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
}









