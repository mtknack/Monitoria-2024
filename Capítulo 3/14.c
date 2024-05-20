/* 14. Faça um programa que leia vários números inteiros e apresente o fatorial de cada
  número. O algoritmo encerra quando se digita um número menor do que 1. */


#include <stdio.h>

int main(void) {
  int num, fatorial;

  while (1) {
    printf("Digite o número inteiro que deseja obter o fatorial: ");
    scanf("%d", &num);
    fatorial = 1;
    if (num < 1) {
      break;
    } else {
      for (int i = 1; i <= num; i++) {
        fatorial *= i;
      }
      printf("O fatorial de %d é igual a %d.\n", num, fatorial);
    }
  }
  return 0;
}