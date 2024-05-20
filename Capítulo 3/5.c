/* 5. Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas sucessivas, crie um programa que calcule o produto de dois números inteiros lidos. Suponha que os números lidos sejam positivos e que o multiplicando seja menor do que o multiplicador. */

#include <stdio.h>

int main(void) {
  int num1, num2, produto = 0;
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número (lembre-se que o multiplicando deve ser menor que o multiplicador): ");
  scanf("%d", &num2);
  for(int i = 0; i < num2; i++) {
    produto += num1;
  } 
  printf("O produto é: %d", produto);
  return 0;
}