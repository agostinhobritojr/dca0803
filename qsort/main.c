/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

float values[] = { 0.4, 0.1, 100, 0.90, 20, 25 };

int compare (const void * a, const void * b){
  if(*(float*)a > *(float*)b )
    return 1;
  if(*(float*)a < *(float*)b )
    return -1;
  else
    return 0;
}

int main (){
  int n;
  qsort (values, 6, sizeof(int), compare);
  for (n=0; n<6; n++)
    printf ("%f ",values[n]);
  return 0;
}
