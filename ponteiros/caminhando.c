#include <stdio.h>

void printChar(unsigned char c){
  unsigned char bit;
  for(bit=128; bit > 0; bit >>= 1){
    if(bit&c){
      printf("1");
    }
    else{
      printf("0");
    }
  }
}

int main(void){
  int x = 32, y[10];
  unsigned char *px;
  px = &x;
  printChar(*(px+3)); printf("|");
  printChar(*(px+2)); printf("|"); 
  printChar(*(px+1)); printf("|"); 
  printChar(*(px+0)); 
  printf("\n");
  x = -32;
  printChar(px[3]); printf("|");
  printChar(px[2]); printf("|"); 
  printChar(px[1]); printf("|"); 
  printChar(px[0]); 
  printf("\n");
  px = y;
  px[4]= 9;

 // printf("px = %p\n", px);
 // printf("*px = %d\n", *px);
 // px = px + 1;
 // printf("px = %p\n", px);
 // printf("*px = %d\n", *px);
}

