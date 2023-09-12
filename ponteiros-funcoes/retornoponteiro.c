#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* myrandom(int n){
  int *r, i;
  r = malloc(n * sizeof(int));
  for(i=0; i<n; i++){
    r[i] = rand();
  }
  return r;
}

int* myrealloc(int* antigo, int tam_antigo, int tam_novo){
  int* retorno;
  if(tam_antigo == tam_novo){
    return antigo;
  }
  // aloco o novo bloco de memoria redimensionada
  retorno = malloc(tam_novo * sizeof(int));
  if(tam_antigo < tam_novo){
    memcpy(retorno, antigo, tam_antigo * sizeof(int)); 
  }
  else{
    memcpy(retorno, antigo, tam_novo * sizeof(int));
  }
  free(antigo);
  return retorno;   
}



int main(void){
  int *r, i, n=5, m=10;
  r = myrandom(n);
  for(i=0; i<n; i++){
    printf("%d\n", r[i]);
  }
  printf("\n");
  r = myrealloc(r, n, m);
  for(i=0; i<m; i++){
    printf("%d\n", r[i]);
  }
  free(r);

  r = realloc(r, m * sizeof(int));

  return 0;
}