#include <stdio.h>
#include <stdlib.h>

int main(){
  int *x, n=10;
  // malloc aloca size bytes na memoria
  // e retorna o endereco do primeiro byte
  // do bloco alocado
  x = (int*) malloc(n*sizeof(int));

  // testa se a alocacao aconteceu corretamente
  if(x == NULL){
    exit(0);
  }
  // usa o espaco alocado da mesma forma
  // que um array
  x[0] = 4;
  for(int i=0; i<10; i++){
     printf("%2d ", x[i]);
  }
  printf("\n");
  printf("&x = %p\n", &x);
  printf(" x = %p\n",  x);

  // libera a memoria alocada
  free(x);
  x = NULL;
  free(x);
  printf("alo, aqui\n");
  return 0;
}



