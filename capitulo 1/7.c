/* Capítulo 1.  Exercício 7 - Faça umprograma em C que leia o nome o endereço e o telefone de um cliente e ao final, imprima esses dados. */

#include <stdio.h>

int main(void) {
  char nome[20];
  char endereco[50];
  char telefone[15];
  printf("# Cadastro de Cliente # \nInsira o nome do cliente: ");
  scanf("\n%[^\n]s", nome);
  printf("Insira o endereço do cliente: ");
  scanf("\n%[^\n]s", endereco);
  printf("Insira o telefone do cliente: ");
  scanf("\n%[^\n]s", telefone);
  printf("\n\n# Dados do Cliente # \nNome: %s \nEndereço: %s \nTelefone: %s", nome, endereco, telefone);
  return 0;
}