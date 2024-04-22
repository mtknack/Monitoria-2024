/*  Capítulo 1.  Exercício 10 - Faça umprograma em C que leia três números reais e calcule a média aritmética destes números. Ao final, o programa deve imprimir o resultado do cálculo. */

#include <stdio.h>

int main(void) {
  float num1, num2, num3, media;
  printf("Insira o primeiro número: ");
  scanf("%f", &num1);
  printf("Insira o segundo número: ");
  scanf("%f", &num2);
  printf("Insira o terceiro número: ");
  scanf("%f", &num3);
  media = (num1 + num2 + num3) / 3;
  printf("A média aritmética dos números é: %.2f", media);
  return 0;
}