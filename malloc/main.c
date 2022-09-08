#include <stdio.h>
#include <stdlib.h> // para malloc()

void teste(){
  float *a;
  a = malloc(4000);
  free(a);
}

int main(){
  int *x, n=10;
 // char c=9;
 // c = n;
 // teste();
  // aloca o bloco de memoria
  // se usar c++
  x = (int*) malloc(n * sizeof(int));
  printf("&n = %p\n", &n);
  printf("&x = %p\n", &x);
  printf(" x = %p\n", x);

  x[9] = 13;
  printf("%d\n", x[9]);
  // libera a memoria alocada
  free(x);
//  x[9] = 15;
//  printf("%d\n", x[9]);

  return 0;
}
