#include <stdio.h>

void printByte(unsigned char c){
  unsigned char bit, result;
  for(bit = 128; bit > 0; bit = bit/2){
    result = bit & c;
//    printf("result = %d\n", result);
    if(result > 0){
      printf("1");
    }  
    else{
      printf("0");
    }
  }
}

int main(void){
  unsigned int x;
  float y;
  y = 0.1;
  unsigned char *px, teste;
//  px = &x;
//  x = 3589731184;
  px = &y;
  printf("|");
  printByte(px[3]); printf("|");  
  printByte(px[2]); printf("|");
  printByte(px[1]); printf("|");
  printByte(px[0]); printf("|");
  printf("\n");
//  teste = 128;
//  printByte(teste);
 // printf("%d\n", *px);
  px = px + 1;
//  printf("%d\n", *px);
  px  = px -1;
  *px = 1;
 // printf("%d\n", x);
}