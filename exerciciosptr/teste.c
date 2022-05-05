#include <stdio.h>
void func(int *px, int *py) {
  px = py;
// B    B
  *py = (*py) * (*px);
// 16 =   4   *   4
// *px e *py = 16  
  *px = *px + 2;
// 18 =  16 + 2
}
int main(void) {
  int x, y;
  scanf("%d", &x); /*3*/
  scanf("%d", &y); /*4*/
  func(&x, &y); // A , B
  printf("x = %d, y = %d\n", x, y);
}