/* Capítulo 1.  Exercício 7 - Faça umprograma em C que leia o nome o endereço e o telefone de um cliente e ao final, imprima esses dados. */

#include <stdio.h>

int main(void) {
  char nome[20], endereco[50], telefone[15];
  printf("# Cadastro de Cliente # \nInsira o nome do cliente: ");
  fgets(nome, 20, stdin);
  printf("Insira o endereço do cliente: ");
  fgets(endereco, 50, stdin);
  printf("Insira o telefone do cliente: ");
  fgets(telefone, 15, stdin);
  printf("\n\n# Dados do Cliente # \n\nNome: %s \nEndereço: %s \nTelefone: %s", nome, endereco, telefone);
  return 0;
}