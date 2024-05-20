/* 11. Construa um programa em C que leia vários números e informe quantos números entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução. */

#include <stdio.h>

int main(void) {
  int num, cont = 0;
  do {
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 200) {
      cont++;
    }
  } while (num != 0);
  printf("Foram digitados %d números entre 100 e 200.", cont);
  return 0;
}