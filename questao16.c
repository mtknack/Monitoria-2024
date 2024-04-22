/* Capítulo 1.  Exercício 16 - Faça um programa em C que calcule o reajuste do salário de um funcionário. Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor do novo salário */

#include <stdio.h>

int main(void) {
  float salario, reajuste, novosalario;
  printf("Insira o atual salário do funcionário: ");
  scanf("%f", &salario);
  printf("Insira o percentual de reajuste (EX: 20%, 50%, etc.): ");
  scanf("%f", &reajuste);
  reajuste *= 0.01;
  novosalario = salario + (salario * reajuste);
  printf("O novo salário do funcionário é: %.2fR$", novosalario);
  return 0;
}