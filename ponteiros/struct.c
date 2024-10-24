#include <stdio.h>

struct alo {
  int x;
  char y;
  char w;
  char k;
  int z;
};

int main(void) {
  struct alo a;
  a.x = 3;
  a.y = 4;
  a.z = 5;
  printf("tamanho = %d\n", sizeof(struct alo));
  printf("a.x (%p) = %d\n", &(a.x), a.x);
  printf("a.y (%p) = %d\n", &(a.y), a.y);
  printf("a.z (%p) = %d\n", &(a.z), a.z);
}