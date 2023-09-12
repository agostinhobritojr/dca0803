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

void *myrealloc_generico(void * antigo, size_t tam_antigo, 
size_t tam_novo){

  void *retorno;

  if (tam_antigo == tam_novo){
    return antigo;
  }

  retorno =  malloc(tam_novo);

  if(tam_antigo < tam_novo){
    memcpy(retorno, antigo, tam_antigo); 
  }
  else{
    memcpy(retorno, antigo, tam_novo);
  }
  free(antigo);
  return retorno;   
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
  int *r, i, n=10, m=5;
  r = myrandom(n);
  for(i=0; i<n; i++){
    printf("%d\n", r[i]);
  }
  printf("\n");
//  r = myrealloc(r, n, m);
  r = myrealloc_generico(r, n*sizeof(int), m*sizeof(int));
  for(i=0; i<m; i++){
    printf("%d\n", r[i]);
  }

//  r = realloc(r, m * sizeof(int));

  return 0;
}