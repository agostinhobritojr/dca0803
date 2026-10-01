#include <stdio.h>

int funcao(int a){
  return a+1;
}qq

void alo(int (*f)(int)){
  printf("ret = %d\n", f(3));
}

int main(void){
  alo(funcao);
}