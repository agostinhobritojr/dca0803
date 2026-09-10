#include <stdio.h>

struct Alo{
  int a;
  char g;
  char e;
  int b;
  char f;
  int c;
  char d;
};

int main(){
  struct Alo alo, *palo;
  palo = &alo;
  alo.a = 3;
  printf("sizeof(Alo) = %d\n", sizeof(struct Alo));
  printf("alo.a     = %d\n", alo.a);
  printf("palo->a   = %d\n", palo->a);
  printf("(*palo).a = %d\n", (*palo).a);
  return 0;
}








