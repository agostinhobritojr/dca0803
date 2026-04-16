/* qsort example */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* qsort */

float values[] = {40, 10.5, 10.2, 90, 20, 25};

int compare(const void* a, const void* b) {
  //
  if (*(float*)a > *(float*)b) {
    return 1;
  } else if (*(float*)a > *(float*)b) {
    return -1;
  } else {
    return 0;
  }
}

int main() {
  int n;
  qsort(values, 6, sizeof(float), compare);
  for (n = 0; n < 6; n++) {
    printf("%f ", values[n]);
  }
  return 0;
}