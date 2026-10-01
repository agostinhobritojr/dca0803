/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

float values[] = { 40, 10.5, 100, 10.3, 20, 25 };

int compare (const void * a, const void * b){
  if(*(float*)a > *(float*)b)
    return 1;
  else if(*(float*)a < *(float*)b)
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




