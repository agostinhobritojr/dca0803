#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* myrealloc(int* old, int nold, int nnew){
  int *new;
  if(nold == nnew){
    return old;
  }
  // alocar o novo bloco de memoria
  new = (int*) malloc(nnew * sizeof(int));
  if(nold < nnew){
    memcpy(new, old, nold*sizeof(int));
  }
  else if(nold > nnew){
    memcpy(new, old, nnew*sizeof(int));
  }
  free(old);
  return new;
}

int main(){
  int *x, n=4, m=4;
  x = (int*) malloc(n * sizeof(int));
  for(int i=0; i<n; i++){
    x[i] = rand()%10;
  }
  for(int i=0; i<n; i++){
    printf("%2d ", x[i]);
  }
  printf("\n");
  x = myrealloc(x, n, m);
  for(int i=0; i<m; i++){
    printf("%2d ", x[i]);
  }
  free(x);
  return 0;
}

