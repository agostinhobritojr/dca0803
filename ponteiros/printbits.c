#include <stdio.h>

void printBits(unsigned char c) {
  unsigned char a;
  unsigned char bit;

  for (bit = 128; bit > 0; bit = bit / 2) {
    a = bit & c;
    if (a != 0) {
      printf("1");
    } else {
      printf("0");
    }
  }
}

int main(void) {
  int d, *pd;
  unsigned char *c;

  d = 25734233;
  pd = &d;
  printf("%d\n", *pd);
  c = &d;
  //  printf("%d\n", *c);
  printf("|");
  printBits(*(c + 3));
  printf("|");
  printBits(*(c + 2));
  printf("|");
  printBits(*(c + 1));
  printf("|");
  printBits(*(c + 0));
  printf("|");

  //  printf("%d\n", *c);
  //  printBits(127);
  printf("\n");
}