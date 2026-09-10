#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int x;
  srand(time(NULL));
  x = rand() % 11 + 10;
  printf("x = %d\n", x);
}