/* 8 - Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas. Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda calculado conforme a tabela a seguir: 
  - Salário menor que R$1300,00 = Isento 
  - Salário maior ou igual a R$1300,00 e menor que R$2300,00 = 10% do salário bruto 
  - Salário maior ou igual a R$2300,00 = 15% do salário bruto */

#include <stdio.h>

int main(void) {
  char nome[50];
  float salario;
  printf("Cálculo do Imposto de renda: \n");
  for(int i = 0; i <= 10; i++) {
    printf("Digite o nome: ");
    scanf("\n%[^\n]s", nome);
    printf("Digite o salário: ");
    scanf("%f", &salario);
    if(salario > 0 && salario < 1300) {
      printf("Isento de imposto.\n");
    } else if( salario >= 1300 && salario < 2300) {
      printf("Valor do imposto a ser pago: %.2f R$.\n" , salario * 0.1);
    } else if ( salario >= 2300) {
      printf("Valor do imposto: %.2f R$.\n", salario * 0.15);
    } else {
      printf("Valor inválido.\n");
    }
  }
  return 0;
}