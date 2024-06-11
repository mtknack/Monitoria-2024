/* 20. Faça um programa que leia a matrícula e a média de 100 alunos. Ordene da maior para a menor nota e imprima uma relação contendo todas as matrículas e médias. */ 

#include <stdio.h>

#define N 100

int main(void) {
  int matricula[N], i, j, auxMat;
  float media[N], auxMedia;

  for (i = 0; i < N; i++) {
    printf("Digite a matricula: ");
    scanf("%d", &matricula[i]);
    do {
      printf("Digite a média: ");
      scanf("%f", &media[i]);
    } while (media[i] < 0 || media[i] > 10);
    printf("\nDados armazenados com sucesso!\n\n");
  }
  
  for(i = 0; i < N - 1; i++) {
    for (j = 0; j < N - 1 - i; j++) {
      if (media[j] < media[j + 1]) {
        //OBS: Aqui trocamos as posições das médias
         auxMedia = media[j];
         media[j] = media[j + 1];
         media[j + 1] = auxMedia;
        //OBS: Aqui trocamos as posições das matriculas
         auxMat = matricula[j];
         matricula[j] = matricula[j + 1];
         matricula[j + 1] = auxMat;
        }
    }
  }
  printf("\n\n  Matricula:    Média:  \n");
  for (i = 0; i < N; i++) {
    printf("%12d", matricula[i]);
    printf("%8.2f\n", media[i]);
  }
  return 0;
}
