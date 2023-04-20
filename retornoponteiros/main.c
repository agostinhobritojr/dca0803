#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* myrandom(int n) {
  int *r, i;
  r = malloc(n * sizeof(int));
  for (i = 0; i < n; i++) {
    r[i] = rand()%100;
  }
  return r;
}

int* myrealloc(int *x, int oldsize, int newsize){
  int *y;
  if(oldsize == newsize){
    return x;
  }
  y = malloc(newsize * sizeof(int));

  if(oldsize < newsize){
     memcpy(y, x, oldsize * sizeof(int)); 
  }
  else{
     memcpy(y, x, newsize * sizeof(int));    
  }
  free(x);
  return y;
}


int main(void){
  int *x, n, i;
  n = 5;
  x = myrandom(n);
  for(i=0; i<n; i++) {
    printf("%2d ", x[i]);
  }
  printf("\n");

  x = myrealloc(x, n, 7);
  for(i=0; i<7; i++) {
    printf("%2d ", x[i]);
  }
  printf("\n");

  free(x);

}



