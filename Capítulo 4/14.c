/* 14. Faça um programa que armazene 50 números inteiros em um vetor. O programa
  deve gerar e imprimir um segundo vetor em que cada elemento é o quadrado do
  elemento do primeiro vetor. */

#include <stdio.h>

#define N 50
int main(void) {
  int i, vetor[N], vetor2[N];

  for (i = 0; i < N; i++){
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &vetor[i]);
    vetor2[i] = vetor[i] * vetor[i];
  }

  printf("\n\n Quadrado dos números digitados: \n");
  for (i = 0; i < N; i++){
    printf("%d \n", vetor2[i]);
  }
  
  return 0;
}