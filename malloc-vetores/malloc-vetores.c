#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *x, i, n;
  n = 10;
  printf("x  = %p\n", x);
  printf("&x = %p\n", &x);
  printf("&i = %p\n", &i);
  printf("&n = %p\n", &n);
  x = (int*) malloc(n * sizeof(int));
  printf("x  = %p\n", x);
  //   ^^^^ casting
  x[3] = 4;
  // nao use memoria alem do limite alocado
//  for(i=0; i<20; i++){
  for(i=0; i<n; i++){
    x[i] = i;
  }
  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
  /* nao pode usar memoria jah liberada
  for(i=0; i<20; i++){
    printf("%d, ", x[i]);
  }
  */
  x = NULL;
  free(x);
  printf("passou do free\n");
}