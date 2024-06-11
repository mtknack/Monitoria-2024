/* 5. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule e armazene a média arredondada. Armazene também a situação do aluno:
1- Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem
contendo as notas, a média e a situação de cada aluno em formato tabulado. Utilize quantos vetores forem necessários para armazenar os dados. */

#include <stdio.h>

int main(void) {
  int i, situacao[15];
  float notap1[15], notap2[15], media[15];

  for (i=0; i < 15; i++) {

    do {
      printf("Digite a primeira nota do aluno %d: ", i+1);
      scanf("%f", &notap1[i]);
    } while (notap1[i] < 0 || notap1[i] > 10);
    printf("Sucesso ao registrar!\n");
    do {
      printf("Digite a segunda nota do aluno %d: ", i+1);
      scanf("%f", &notap2[i]);
    } while (notap2[i] < 0 || notap2[i] > 10);
    printf("Sucesso ao registrar!\n\n");
    
    media[i] = (notap1[i] + notap2[i]) / 2;
    if (media[i] >= 7) {
      situacao[i] = 0;
    } else {
      situacao[i] = 1;
    }
  }
  
  printf("\n\t # Lista de Alunos: # \n\n");
  printf("Nota 1: Nota 2: Média:  Situação: \n");
  for (i=0; i<15; i++) {
    printf("%.2f\t", notap1[i]);
    printf("%.2f\t",notap2[i]);
    printf("%.2f\t",media[i]);
    if (situacao[i] == 0) {
      printf("Aprovado!\n");
    } else {
      printf("Reprovado!\n");
    }
  }
  return 0;
}
