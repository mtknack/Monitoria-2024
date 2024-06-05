/* 9. Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e imprimir a matriz SOMALINHA, em que cada elemento é a soma dos elementos de uma linha da matriz A. Faça o trecho que gera a matriz separado da entrada e da saída.*/
  
#include <stdio.h>

int main(void) {
  int A[3][5], SomaLinha[3], i, j;

  for(i=0; i<3; i++){
    for(j=0; j<5; j++){
      printf("Digite o valor da posição [%d][%d]: ", i+1, j+1);
      scanf("%d", &A[i][j]);
    }
  }
  for(i=0; i<3; i++){
    SomaLinha[i] = 0;
  }
  for(i=0; i<3; i++){
    for(j=0; j<5; j++){
      SomaLinha[i] += A[i][j]; 
    }
  }
  printf("\n Soma das linhas da matriz:\n");
  for(i=0; i<3; i++){
    printf("%d  ", SomaLinha[i]);
  }
  return 0;
}