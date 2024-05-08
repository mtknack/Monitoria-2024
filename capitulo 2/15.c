/* 15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa em C que leia o valor do produto e imprima o valor da venda. */

#include <stdio.h>

int main(void) {
  float valor;
  printf("Insira o valor do produto: ");
  scanf("%f", &valor);
  if (valor < 20 && valor > 0) {
    valor = valor * 1.45;
    printf("O valor da venda é: %.2f R$", valor);
  } else if (valor >= 20) {
    valor = valor * 1.3;
    printf("O valor da venda é: %.2f R$", valor);
  } else {
    printf("Valor inválido");
  }
  return 0;
}