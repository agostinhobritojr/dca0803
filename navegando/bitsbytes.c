#include <stdio.h>

void printBits(unsigned char c) {
  unsigned char bit;
  for (bit = 128; bit > 0; bit = bit / 2) {
    if (c & bit){
      printf("1");
    }
    else{
      printf("0");
    }
  }
}

int main(void) {
  unsigned int x;
  unsigned char *px, teste;
  x = -2;
  px = &x;
  printf("|");  printBits(px[3]); // *(px+3)
  printf("|"); printBits(px[2]); // *(px+3)
  printf("|"); printBits(px[1]); // *(px+3)
  printf("|"); printBits(px[0]); // *(px+3)
  printf("|\n");
}

