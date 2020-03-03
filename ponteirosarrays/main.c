#include <stdio.h>

int main(){
  int x;
  int y[10], i=0;
  int *px, *py;
  char *pcx;

  for(i=0; i<10; i++){
    y[i] = i+1;
  }
  px = y; // para arrays, nao eh
  // necessario usar o operador de
  // referencia
  py = px;


  for(i=0; i<10; i++){
    printf("%d, ", *(py+i));
  }
  printf("\n");
  for(i=0; i<10; i++){
    printf("%d, ", px[i]);
  }
  printf("\n");

  x = 257;
  px = &x;
  pcx = (char*) &x;
  printf("x = %d\n", *px);
  printf("x = %d\n", *pcx);
  pcx = pcx+1;
  printf("x = %d\n", *pcx);
  printf("pcx = %ld\n", pcx);
  return 0;
}





