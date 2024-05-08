/* 6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido. */
  
#include <stdio.h>

int main(void) {
  float salario, prestacao;
  printf("Insira o valor do salário bruto: ");
  scanf("%f", &salario);
  printf("Insira o valor da prestação: ");
  scanf("%f", &prestacao);
  if (prestacao > salario * 0.3) {
    printf("Empréstimo não concedido.");
  } else {
    printf("Empréstimo concedido.");
  }
  return 0;
}