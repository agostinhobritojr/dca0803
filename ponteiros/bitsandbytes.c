#include <stdio.h>

void printbits(unsigned char c) {
  unsigned char bit;
  for (bit = 128; bit != 0; bit >>= 1) {
    if (bit & c) {
      printf("1");
    } else {
      printf("0");
    }
  }
}

int main(void) {
  unsigned char* p;
  float x = 0.1;
  p = (unsigned char*)&x;

  printf("|");
  printbits(p[3]);
  printf("|");
  printbits(p[2]);
  printf("|");
  printbits(p[1]);
  printf("|");
  printbits(p[0]);
  printf("|");
  printf("\n");
}