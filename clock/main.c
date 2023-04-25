#include <math.h>  /* sqrt */
#include <stdio.h> /* printf */
#include <time.h>  /* clock_t, clock, CLOCKS_PER_SEC */

int main() {
  clock_t t;
  int i;
  float f = 1.5, z;

  t = clock();
  for (i = 0; i < 1000000; i++) {
    z = f * f * f;
  }
  t = clock() - t;
  printf("It took me %d clicks (%f seconds).\n", t,
         ((float)t) / CLOCKS_PER_SEC);

  t = clock();
  for (i = 0; i < 1000000; i++) {
    z = pow(f, 3);
  }
  t = clock() - t;
  printf("It took me %d clicks (%f seconds).\n", t,
         ((float)t) / CLOCKS_PER_SEC);

  return 0;
}
