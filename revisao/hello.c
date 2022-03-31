#include <stdio.h>  // diretiva de inclusao

int main(void) {
  int i;  // declaracao de variavel
  unsigned char j;

  j = 254;
  printf("j = %d\n", j);
  j = j + 1;
  printf("j = %d\n", j);
  j = j + 1;
  printf("j = %d\n", j);
  j = j - 1;
  printf("j = %d\n", j);

  // laco de repeticao

  for (i = 1; i <= 30; i++) {
    printf("i = %d\n", i);
  }

  i = 0;
  while (i < 10) {
    printf("i = %d\n", i);
    i = i + 1;
  }

  i = 0;
  do {
    printf("i = %d\n", i);
    i = i + 1;
  } while (i < 10);

  for(;1;){
    printf("fim do mundo\n");
  }
}
