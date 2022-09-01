#include <stdio.h>

void printbits(unsigned char c){
  unsigned char bit;
  for(bit=128; bit!=0; bit>>=1){
    if((c & bit) != 0) printf("1");
    else printf("0");
  }
}

int main(){
  int x ;
 // x = 641;
  x = 0;
  unsigned char *pc;  //int *pc;
  pc = (unsigned char*) &x;  //pc = &x;
//  printf("pc = %p\n", pc);
  pc[0]=129;
  pc[1]=2;
  printf("x= %d\n", x);
  printbits(pc[3]);
  printbits(*(pc+2));
  printbits(*(pc+1));
  printbits(pc[0]);
  printf("\n");
  return 0;
}
