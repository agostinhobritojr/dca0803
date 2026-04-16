#include <stdio.h>

struct alo {
  int a;
  char b;
  int c;
  char d;
};

int main(void) {
  struct alo x;
  printf("tamanho de x = %ld\n", sizeof(x));
}