#include <stdio.h>

int funcao(int a){
  return a+1;
}

int main(void){
  int (*pf)(int);
  pf = &funcao; 
  // pf = funcao;
  printf("valor = %d\n", pf(1));
}
