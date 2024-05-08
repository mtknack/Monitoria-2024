/* 21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.   • Nome do livro:    • Tipo de usuário:  • Total de dias: */


#include <stdio.h>

int main(void) {
  char livro[100];
  int usuario;
  printf("Insira o nome do livro: ");
  scanf("\n%[^\n]s", livro);
  printf("Insira o tipo de usuário, escreva 0 para professor e 1 para aluno: ");
  scanf("%d", &usuario);
  if(usuario == 0) {
    printf("\n----------------------------------\n    > Recibo: <\n");
    printf("Nome do livro: %s\n", livro);
    printf("Tipo de usuário: Professor\n");
    printf("Dias restante de empréstimo: 10\n");
    printf("----------------------------------");
  } else if(usuario == 1) {
    printf("\n----------------------------------\n    > Recibo: <\n");
    printf("Nome do livro: %s\n", livro);
    printf("Tipo de usuário: Aluno\n");
    printf("Dias restante de empréstimo: 3\n");
    printf("----------------------------------");
  } else {
    printf("Tipo de usuário inválido");
  }
  return 0;
}