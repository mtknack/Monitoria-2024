/* Capítulo 1.  Exercício 13 - Faça umprograma em C que leia o saldo de uma conta poupança e imprima o novo saldo, considerando umreajuste de 2%. */

#include <stdio.h>

int main(void) {
  float num;
  printf("Insira o saldo da conta poupança: ");
  scanf("%f", &num);
  printf("O seu novo saldo é: %.2f", num*1.02);
  return 0;
}
