/* 11. Construa um programa que leia dados para um vetor de 100 elementos inteiros. Imprimir o maior e o menor, sem ordenar, o percentual de números pares e a média dos elementos do vetor. */
  
#include <stdio.h>

#define N 100

int main(void) {
  int vetor[N];
  int i, maior, menor, soma = 0, pares = 0;
  float media, percentualPares;
  for (i = 0; i < N; i++){
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
    soma += vetor[i]; 
    if (i == 0 || vetor[i] > maior) {
        maior = vetor[i]; 
    }
    if (i == 0 || vetor[i] < menor) {
        menor = vetor[i]; 
    }
    if (vetor[i] % 2 == 0) {
        pares++; 
    }
  }
  media = (float)soma / N;
  percentualPares = (float)pares*100/N;
    
  printf("O maior elemento do vetor é: %d\n", maior);
  printf("O menor elemento do vetor é: %d\n", menor);
  printf("O percentual de números pares é: %.2f%%\n", percentualPares);
  printf("A média dos elementos do vetor é: %.2f\n", media);
  
  return 0;
}
