#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int* myrealloc(int* x, int oldsize, int newsize){
  int *ret;
  if(newsize == oldsize){
    return x;
  }
  ret = (int *)malloc(newsize * sizeof(int));
  if(newsize > oldsize){
    memcpy(ret, x, oldsize * sizeof(int));
  }
  else{
    memcpy(ret, x, newsize * sizeof(int));
  }
  return ret;
}

int main(void){
  int *x;
  int n = 5;
  int old_n = n;
  int new_n;

  x = (int *)malloc(n * sizeof(int));
  for(int i = 0; i < n; i++){
    x[i] = rand() % 100;
  }
  for(int i = 0; i < n; i++){
    printf("%2d ", x[i]);
  }
  printf("\n");

  old_n = 5;
  new_n = 7;
  x = myrealloc(x, old_n, new_n);

/*
  {
    n = 7;
    x = realloc(x, n * sizeof(int));
    for(int i = 0; i < n; i++){
      printf("%2d ", x[i]);
    }
    printf("\n");
    
    n = 3;
    x = realloc(x, n * sizeof(int));
    for(int i = 0; i < n; i++){
      printf("%2d ", x[i]);
    }
    printf("\n");
    
    n = 5;
    x = realloc(x, n * sizeof(int));
    for(int i = 0; i < n; i++){
      printf("%2d ", x[i]);
    }
    printf("\n");
  }
  */
  free(x);
}
