/* 6. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Defina também um tipo para esta estrutura. Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco. */
  
#include <stdio.h>

struct aluno {
  int matricula;
  char nome[30];
  float p1, p2, p3;
 }; 

typedef struct aluno Aluno;

int main(void) {
  Aluno alunos[5];
  int i, iMaior = 0;
  float media, maiorMedia = 0;

  for(i = 0; i < 5; i++){
    printf("Informe a matricula do aluno: ");
    scanf("%d", &alunos[i].matricula);
    printf("Informe o nome do aluno: ");
    scanf("%s", alunos[i].nome);
    printf("Informe a nota da P1: ");
    scanf("%f", &alunos[i].p1);
    printf("Informe a nota da P2: ");
    scanf("%f", &alunos[i].p2);
    printf("Informe a nota da P3: ");
    scanf("%f", &alunos[i].p3);
    
    media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3;
    if (media > maiorMedia) {
      maiorMedia = media;
      iMaior = i;
    }
  }

  printf("#  Dados do aluno com maior media  #\n");
  printf("Matricula: %d \n", alunos[iMaior].matricula);
  printf("Nome.....: %s \n", alunos[iMaior].nome);
  printf("Nota P1..: %.2f \n", alunos[iMaior].p1);
  printf("Nota P2..: %.2f \n", alunos[iMaior].p2);
  printf("Nota P3..: %.2f \n", alunos[iMaior].p3);
  printf("Media....: %.2f \n", maiorMedia);
  
  return 0;
}