#include <stdio.h>
#include <stdlib.h> // para qsort()

int compare(const void* p1, const void* p2){
  if( *(int*)p1 < *(int*)p2){
    return -1;
  }
  if( *(int*)p1 == *(int*)p2){
    return 0;
  }
  if( *(int*)p1 > *(int*)p2){
    return 1;
  }
}

int main(void){
  int x[] = {3, 9, 11, 8, -3};
  int i;
  for(i=0; i<5; i++){
    printf("%d ", x[i]);
  }
  printf("\n");
  qsort(x, 5, sizeof(int), compare);
  for(i=0; i<5; i++){
    printf("%d ", x[i]);
  }
  printf("\n");
}