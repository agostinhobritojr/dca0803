struct cliente{
  int id;
  char nome[400];
  int fone;
};

int main(void){
  struct cliente jose, *pc;
  pc = &jose;
  pc->id = 14394;
  jose.id = 302;
  pc->id = 302;
  
  pc = malloc(10 * sizeof(struct cliente));
  // primeiro cliente
  pc[0].id = 20;
  // quinto cliente
  pc[4].id = 20;

  free(pc);

  printf("id = %d\n", pc->id);
  printf("digite o fone: ");
  scanf("%d", &pc->fone);
  printf("fone = %d\n", pc->fone);
}