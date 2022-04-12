#include <stdio.h>

void printchar(unsigned char c){
  unsigned char bit, cont;
  bit=128;
  for(cont=0; cont<8; cont++){
    if((c & bit) > 0){
      printf("1");
    }
    else{
      printf("0");
    }
    bit = bit>>1;
  }
}

int main()
{
  int x;
  short int y[3], i;
  unsigned char *pc;
  pc = &x;
  pc[0] = 1;
  pc[1] = 1;

  printf("x = %d\n", x);
//  printf("c = %d\n", pc[1]);

  printf("\n");
  return 0;
}
