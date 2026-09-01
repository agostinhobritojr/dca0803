#include <stdio.h>

void printBits(unsigned char c){
   unsigned char bit;
   for(bit = 128; bit!=0; bit=bit>>1){
   if(bit & c){
     printf("1");
   }
   else{
     printf("0");
   }
}
}

int main(){
  unsigned int x;
  unsigned char *c;
  x = -1;
  c = &x;
  printf("x = %u\n", x);
  printf("|");
  printBits(c[3]);  printf("|"); // *(c+3)
  printBits(c[2]);  printf("|");
  printBits(c[1]);  printf("|");
  printBits(c[0]);  printf("|");

  printf("\n");

  return 0;
}







