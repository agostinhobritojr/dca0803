#include <stdio.h>

struct alo{
  int a;
  char h;
  char e;
  int b;
  int c;
  float d;
  char f;
  char g;
};

int main(void){
  struct alo jose;
  jose.a = 1;
  printf("tam = %d\n", sizeof(jose));
}