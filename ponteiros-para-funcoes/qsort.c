#include <stdlib.h>
#include <stdio.h>

int compara (const void* p1, const void* p2){
  // *p1 = 3, *p2 = 2
  // primeiro converte o void* para int* 
  // para que o valor do endereco possa ter um
  // tipo vahlido associado e do mesmo tipo do array
  // a ser ordenado
  if(*(int*)p1 > *(int*)p2){
    return 1;
  }
  else if(*(int*)p1 < *(int*)p2){
    return -1;
  }
  else{
    return 0;
  }
}

int main(void) {
  int x[] = {-3, 3, 2, 1, 0};

  qsort(x, 5, sizeof(int), compara);

  for(int i=0; i<5; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  return 0;
}