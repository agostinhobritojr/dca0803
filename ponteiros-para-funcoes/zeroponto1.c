#include <stdio.h>

int main(void){
  float x=0.1, y=0;
  int i, n=100000;

  for(i=0; i<n; i++){
    y = y + x;
  }
  printf("x = %f\n", x);
  printf("y = %f\n", y);
}