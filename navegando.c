#include <stdio.h>

int main(void){
  int x[10], i, *px;
  for(i=0; i<10; i++){
    x[i] = i;
  }
//  printf("x = %p\n", x);
  px = x;

  for(i=0; i<10; i++){
    printf("%d, ", px[i]);
  }
  printf("\n");

  for(i=0; i<10; i++){
    printf("%d, ", *(px+i));
  }
  printf("\n");

}