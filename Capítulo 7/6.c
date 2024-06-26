/* 6. Faça um programa que leia o saldo e o % de reajuste de uma aplicação financeira e imprimir o novo saldo após o reajuste. O cálculo deve ser feito por uma função. */

#include <stdio.h>

float calcReajuste(float saldo, float reajuste){
  return saldo + (saldo * (reajuste / 100));
}

int main(void) {
  float saldo, reajuste, novoSaldo;

  printf("Digite o saldo: ");
  scanf("%f", &saldo);
  printf("Digite o reajuste, em %: ");
  scanf("%f", &reajuste);

  novoSaldo = calcReajuste(saldo, reajuste);
  printf("\nNovo saldo: R$%.2f", novoSaldo);
  return 0;
}