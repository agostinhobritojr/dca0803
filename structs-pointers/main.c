#include <stdio.h>

struct cliente{
  int id;
  char nome[400];
  int fone;
};
int main(void){
  struct cliente jose, *pc;
  pc = &jose;
  pc->id = 14394;
  jose.id = 3;
  pc->id = 3;
  //(*pc).id = 3;
  (*pc).id = 3;

  printf("id = %d\n", pc->id);
  printf("digite o fone: ");
  scanf("%d", &pc->fone);
  printf("fone = %d\n", pc->fone);
}
