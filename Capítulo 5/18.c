/* 18. Faça um programa que leia uma matriz 5 X 5 inteira e apresente uma determinada linha da matriz, solicitada via teclado. */

#include <stdio.h>

int main(void) {
  int matriz[5][5], i, j, linha;

  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      printf("Digite o valor do elemento M (%d %d): ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }
  printf("\nDigite a linha da matriz: ");
  do {
    scanf("%d", &linha);
  } while(linha < 0 || linha > 5);
  printf("\n\n-> ");
  for(i = 0; i < 5; i++){
    printf("%d ", matriz[linha-1][i]);
  }
  return 0;
}