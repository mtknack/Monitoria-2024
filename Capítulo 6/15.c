/* 15. Crie um programa com uma estrutura para simular uma agenda de telefone celular, com até 100 registros. Nessa agenda deve constar o nome, sobrenome, número de telefone móvel, número de telefone fixo e e-mail. O programa deverá
fazer a leitura e, após isso, mostrar os dados na tela. */

#include <stdio.h>

#define registros 2

typedef struct telefone{
  char nome[20];
  char sobrenome[30];
  char movel[11];
  char fixo[11];
  char email[30];
} Telefone;

int main(void) {
  Telefone telefone[registros];

  printf("# Cadastro dos contatos # \n");
  for(int i = 0; i < registros; i++){
     printf("Digite o nome: ");
     scanf("%s", telefone[i].nome);
     printf("Digite o sobrenome: ");
     scanf("%s", telefone[i].sobrenome);
     printf("Digite o numero celular: ");
     scanf("%s", telefone[i].movel);
     printf("Digite o numero do tel fixo: ");
     scanf("%s", telefone[i].fixo);
     printf("Digite o e-mail: ");
     scanf("%s", telefone[i].email);
  }

  printf("\n\n-------- Agenda Telefônica --------\n");
  for(int i = 0; i < registros; i++) {
    printf("\nNome: %s\n", telefone[i].nome);
    printf("Sobrenome: %s\n", telefone[i].sobrenome);
    printf("Numero celular: %s\n", telefone[i].movel);
    printf("Numero do tel fixo: %s\n", telefone[i].fixo);
    printf("E-mail: %s\n", telefone[i].email);
  }
  
  return 0;
}