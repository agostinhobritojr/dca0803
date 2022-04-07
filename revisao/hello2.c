#include <stdio.h>
#include <stdlib.h>

enum {FINANCEIRO, RELIGACAO, ENERGIA,  VIA2, SAIR, SUPORTE};

int main(void){
  int x, y, opcao;
  int i, j;

  opcao = 0;
  do{
    printf("digite a opcao:");
    scanf("%d", &opcao);
    switch(opcao){
      case FINANCEIRO: /* comentario importante */
        printf("alo, mundo!\n");
        break;
      case SUPORTE:
        printf("alo, brasil!\n");
        break;
      case VIA2:
        printf("alo, rn!\n");
        break;
      case SAIR:
        exit(0);
      default:
        printf("nenhuma das opcoes\n");
    }
  }while(opcao != 9);  
}




