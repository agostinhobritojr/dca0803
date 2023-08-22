#include <stdio.h>



void troca(int *a, int *b){
  static int tmp=0;
  printf("*a = %d; *b = %d\n", *a, *b);
  tmp = *a; 
  *a = *b; 
  *b = tmp;
  printf("*a = %d; *b = %d\n", *a, *b);
}

void ordena2(int *a, int *b, int *c){
  if(*a > *b) troca(a, b);
  if(*a > *c) troca(a, c);
  if(*b > *c) troca(b, c);
}

void ordena(int *a, int *b, int *c){
  int tmp;
  if(*a > *b){
    tmp = *a; *a = *b; *b = tmp;
  }
  if(*a > *c){
    tmp = *a; *a = *c; *c = tmp;
  }
  if(*b > *c){
    tmp = *b; *b = *c; *c = tmp;
  }
}

int main(void){
  int x=5, y=4, z=3;
 // printf("%p - %p\n", &x, &y);
  printf("x = %d; y = %d, z = %d\n", x, y, z);
  ordena(&x, &y, &z);
  printf("x = %d; y = %d, z = %d\n", x, y, z);
  return 0;
}


