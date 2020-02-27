#include <stdio.h>

void ordena(int *x, int *y, int *z){
 // printf("x = %p\n", x);
  int tmp;
  // 4 3 2
  if(*x > *y){ // 4 > 3 ?
    // troca
    tmp = *x; *x = *y; *y = tmp;
  }
  // 3 4 2
  if(*x > *z){ // 3 > 2 ?
    tmp = *x; *x = *z; *z = tmp;
  }
  // 2 4 3
  if(*y > *z){
    tmp = *y; *y = *z; *z = tmp;
  }
  // 2 3 4
}

int main()
{
  int x=4, y=3, z=2;
//  printf("end x = %p\n", &x);
  ordena(&x, &y, &z);
  printf("%d -> %d -> %d\n",
         x, y, z);
  return 0;
}
