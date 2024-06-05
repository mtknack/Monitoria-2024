/* 6. Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma
  matriz B[2][2]. Gerar e imprimir a matriz SOMA[2][2]. */

#include <stdio.h>

int main(void) {
  int A[2][2], B[2][2], SOMA[2][2], i, j;

  printf("Digite os 4 valores da matriz A:\n");
  for (i = 0; i < 2; i++){
    for (j = 0; j < 2; j++){
      scanf("%d", &A[i][j]);
    }
  }
  printf("Digite os 4 valores da matriz B:\n");
  for (i = 0; i < 2; i++){
    for (j = 0; j < 2; j++){
      scanf("%d", &B[i][j]);
    }
  }
  //Executando a soma
  for (i=0; i<2; i++){
    for (j=0; j<2; j++){
      SOMA[i][j] = A[i][j] + B[i][j];
    }
  }
  printf("\n\nSoma das matrizes:");
  for (i=0;i<2;i++) {
    printf("\n");
    for (j=0;j<2;j++){
      printf("%d ", SOMA[i][j]);
    }
  }
  return 0;
}