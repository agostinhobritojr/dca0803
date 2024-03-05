#include <stdio.h>

void troca(int *a, int *b){
  int tmp;
  tmp = *a; *a = *b; *b = tmp;
}

void ordena(int *a, int *b, int *c){
  int tmp;
  if(*a > *b){
    troca(a , b);
//    tmp = *a; *a = *b; *b = tmp;
  }
  if(*a > *c){
    troca(a , c);
//    tmp = *a; *a = *c; *c = tmp;
  }
  if(*b > *c){
    troca(b , c);
//    tmp = *b; *b = *c; *c = tmp;
  }
}

int main(void){
  int a, b, c;
  printf("Digite a, b, c: ");
  scanf("%d %d %d", &a, &b, &c);
  ordena(&a, &b, &c);
  printf("a = %d; b = %d; c = %d\n", a, b, c);
  return 0;
}
