#include <stdio.h>  /* printf */
#include <stdlib.h> /* qsort */

int values[] = {40, 10, 100, 90, 20, 25};

int compare(const void* a, const void* b) {
  if (*(int*)a > *(int*)b) {
    return 1;
  } else if (*(int*)a < *(int*)b) {
    return -1;
  }
  return 0;
}

int main() {
  int n;
  qsort(values, 6, sizeof(int), compare);
  for (n = 0; n < 6; n++) printf("%d ", values[n]);
  return 0;
}