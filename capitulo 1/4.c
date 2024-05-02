/* CAPÍTULO 1.   4 - Faça um programa em C que leia e imprima um número inteiro. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero;
  printf("Insira um número: ");
  scanf("%d", &numero);
  printf("\nO número inserido foi: %d", numero);
  return 0;
}