/* 3. Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
  imprima: Todos os elementos que se encontram em posições cuja linha mais
  coluna formam um número par. */

#include <stdio.h>

int main(void) {
  int m[5][5], i, j;

  printf("Digite os 25 valores da matriz:\n");
  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      scanf("%d", &m[i][j]);
    }
  }
  printf("\nElementos que se encontram em posições cuja linha mais coluna formam um número par:\n");
  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      if ((i + j) % 2 == 0){
        printf("%d \n", m[i][j]);
      }
    }
  }
  
  return 0;
}