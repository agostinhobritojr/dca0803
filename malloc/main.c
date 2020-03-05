#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *x, *y, i;

  x = (int*) malloc(4*sizeof(int));
  // *(x+0) = 3; *(x+1) = 8;
  // *(x+2) = -4; *(x+3) = 5;
  /*
   *
   * */
  x[0] = 3; x[1] = 8; x[2] = -4; x[3] = 5;

  for(i=0; i<4; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  y= (int*) malloc(4*sizeof(int));
  for(i=0; i<4; i++){
    y[i] = x[i];
  }
  y[1] = 9;

  for(i=0; i<4; i++){
    printf("%d, ", y[i]);
  }
  printf("\n");
  for(i=0; i<4; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  free(x);
  free(y);
  return 0;
}
