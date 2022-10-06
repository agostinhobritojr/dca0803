#include <stdio.h>

int main(){
  unsigned int mais_um=1;
  int menos_um = -1;
  float x=0.1, y=0.3, z=0.4;
  if((x+y) == z){
    printf("eh igual\n");
  }
  else{
    printf("eh diferente\n");
  }


  printf("%u\n", menos_um);
  if(mais_um < menos_um){
    printf("1 < -1\n");
  }
  else{
    printf("alou\n");
  }



  return 0;
}
