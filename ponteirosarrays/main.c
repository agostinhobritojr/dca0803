#include <stdio.h>

void printuchar(unsigned char c){
  printf("%d", c);
}


int main(){
  unsigned int x;
  unsigned char *pc, c;

  c = 106;
  printuchar(c);
  printf("\n");
  return 0;
}
