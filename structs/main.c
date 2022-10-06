#include <stdio.h>

struct alo{
  int a; // 4
  int b; // 4
  long c;// 8
  char d; // 1
  char e; // 1
};

int main(){
  struct alo a[2];
  struct alo b, *pc;
  pc = &b;

  b.e = 3;

  (*pc).a = 3;
  pc->a = 3;
//  pc->a;

  a[0].a = 3;
  printf("tam = %d\n", sizeof(struct alo));
  printf("a.a = %p\n", &a[0].a);
  printf("a.b = %p\n", &a[0].b);
  printf("a.c = %p\n", &a[0].c);
  printf("a.d = %p\n", &a[0].d);
  printf("a.e = %p\n", &a[0].e);
  printf("a.a = %p\n", &a[1].a);
  return 0;
}
