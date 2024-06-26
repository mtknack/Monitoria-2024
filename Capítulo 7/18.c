/* 18. Faça um programa que leia um vetor com tamanho 10 de números inteiros. Após ler, uma função deve verificar se o vetor está ordenado, de forma crescente ou decrescente, ou se não está ordenado. Imprimir essa resposta no final do programa. */

#include <stdio.h>

void ordenacao(int *vetor){
  int i, j, crescente = 1, decrescente = 1;
  
  for (int i = 0; i < 9; i++) {
    if (vetor[i] > vetor[i + 1]) {
      crescente = 0;
    }
    if (vetor[i] < vetor[i + 1]) {
      decrescente = 0;
    }
  }

  if (crescente) {
  printf("O vetor está ordenado de forma crescente.\n");
  } else if (decrescente) {
  printf("O vetor está ordenado de forma decrescente.\n");
  } else {
  printf("O vetor não está ordenado.\n");
  }
}

int main(void) {
  int vetor[10], i;
  printf("Digite os 10 elementos do vetor: \n");
  for(i=0; i<10; i++){
    printf("-> ");
    scanf("%d", &vetor[i]);
  }
  
  ordenacao(vetor);
  
  return 0;
}