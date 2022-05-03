#include <stdio.h>

int funcao(int a){
  return a+1;
}
int main(void){
  int (*pf)(int) = &funcao;
  int a;
  printf("end a = %p\n   pf = %p\n", &a, pf);
  printf("valor = %d\n\n", pf(1));
}

