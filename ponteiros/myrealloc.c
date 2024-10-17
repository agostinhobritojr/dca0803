#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// realiza um redimensionamento NAO DESTRUTIVO dos
// dados apontados por y
int *myrealloc(int *y, int n_old, int n_new) {
  int *z;
  // caso o array permaneca com o tamanho, simplesmente
  // devolva o proprio endereco com os dados
  if (n_old == n_new) {
    return y;
  }
  // aloca o novo bloco de memoria
  z = (int *)malloc(n_new * sizeof(int));
  if (n_new > n_old) {
    // copia todo o array antigo para a nova memoria
    memcpy(z, y, n_old * sizeof(int));
  } else {
    // copia somente o que cabe na nova memoria
    memcpy(z, y, n_new * sizeof(int));
  }
  return z;
}

int main(void) {
  int *x;
  int n_old, n_new, i;
  n_old = 4;
  n_new = 4;
  x = (int *)malloc(n_old * sizeof(int));
  for (i = 0; i < n_old; i++) {
    x[i] = rand() % 10;
  }
  printf("%p: ", x);
  for (i = 0; i < n_old; i++) {
    printf("%d ", x[i]);
  }
  printf("\n");
  // x = 0x...40
  x = myrealloc(x, n_old, n_new);
  printf("%p: ", x);
  for (i = 0; i < n_new; i++) {
    printf("%d ", x[i]);
  }
  printf("\n");
}