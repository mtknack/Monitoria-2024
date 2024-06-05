/* 17. Faça um programa que leia um conjunto de 30 valores inteiros, armazene-os em um vetor e os imprima ao contrário da ordem de leitura. */

#include <stdio.h>

#define N 30

int main(void) {
  int i, valor[N];

  printf("Digite os números: \n");
  for(i = 0; i < N; i++){
    printf("-> ");
    scanf("%d", &valor[i]);
  }
  printf("\n\n Números digitados: \n");
  for(i = N - 1; i >= 0; i--){
    printf("%d \n", valor[i]);
  }
  return 0;
}