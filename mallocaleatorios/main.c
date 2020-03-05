#include <stdio.h>
#include <stdlib.h>

void ordena(int* x, int n){
  int i, j, tmp;
  // bubblesort (bolha)
  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(x[j]<x[i]){
        tmp = x[i];
        x[i] = x[j];
        x[j] = tmp;
      }
    }
  }
}

int main()
{
  int *x, n, i;
  printf("Digite a quantidade de numeros: ");
  scanf("%d", &n);

  x = (int*) malloc(n*sizeof(int));

  for(i=0; i<n; i++){
    x[i] = rand()%100;
  }
  ordena(x, n);
  for(i=0; i<n; i++){
    printf("%d, ",x[i]);
  }
  free(x);
  return 0;
}
