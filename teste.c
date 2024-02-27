#include <stdio.h>

int main(void){
  float x=0;
  for(int i=0; i<1000000; i++){
    x += 0.125;
  }
  printf("%f\n", x);
}
