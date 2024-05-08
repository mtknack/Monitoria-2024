/* 3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3". */
  

#include <stdio.h>

int main(void) {
  int num;
  printf("Insira o número que deseja verificar se é múltiplo de 3: ");
  scanf("%d", &num);
  if (num % 3 == 0) {
    printf("%d é um múltiplo de 3", num);
  } else {
    printf("%d não é um múltiplo de 3", num);
  }
  return 0;
}