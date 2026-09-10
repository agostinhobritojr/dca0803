#include <iostream>
#include <stdlib.h>
#include <time.h>

// exemplo de retorno de endereco de variavel local
// NUNCA FASSA ISSO
int* myrandom2(int n){
  int r[10], i;
  for(i=0; i<10; i++){
    r[i] = rand();
  }
  return r;
}


int* myrandom(int n){
  int *r, i;
  r = (int*) malloc(n * sizeof(int));
  for(i=0; i<n; i++){
    r[i] = rand()%10;
  }
  return r;
}

int main(){
  int *x;

  srand(time(NULL));

  x = myrandom(10);
  printf("x = %p\n", x);
  for(int i=0; i<10; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  x = (int*) realloc(x, 15*sizeof(int));

  printf("x = %p\n", x);
  for(int i=0; i<15; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");


  free(x);
  return 0;
}




