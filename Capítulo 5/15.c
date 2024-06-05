/* 15. A matriz dados contém: 1ª coluna a matrícula do aluno; na 2ª o sexo (0 para feminino e 1 para masculino); na 3ª o código do curso, e na 4ª, o CR (coeficiente de rendimento). Faça um programa que armazene esses dados sabendo-se que o código do curso é uma parte da matrícula: aascccnnn (aa ano, s semestre, ccc código do curso e nnn matrícula no curso). Além disso, um grupo empresarial resolveu premiar a aluna com CR mais alto de um curso cujo código deverá ser digitado. Suponha 10 alunos e que o CR é um nº inteiro. */
#include <stdio.h>

#define nAlunos 10

int main(void) {
  int dados[nAlunos][4], i, maiorCR = 0, iMaior, cod; 
  
  for (i=0; i<nAlunos; i++) {
    printf("Informe os dados do aluno %d: \n", i+1);
    printf("Informe a matricula <aascccnnn>:");
    scanf("%d", &dados[i][0]);
    printf("Informe o sexo <0-Feminino / 1-Masculino>:");
    scanf("%d", &dados[i][1]);
    printf("Informe o codigo do curso:");
    scanf("%d", &dados[i][2]);
    printf("Informe o CR:");
    scanf("%d", &dados[i][3]);
  }

  printf("\n\nInforme o código do curso selecionado para a premiação: ");
  scanf("%d", &cod);
  for (i=0; i<nAlunos; i++) {
    if (dados[i][2] == cod) {
      if (dados[i][3] > maiorCR && dados[i][1] == 0) {
        maiorCR = dados[i][3];
        iMaior = i;
      }
    }
  }
  printf("\n\n # Dados da aluna premiada #\n");
  printf("Matrícula: %d\n", dados[iMaior][0]);
  printf("CR: %d ", dados[iMaior][3]);
  return 0;
}