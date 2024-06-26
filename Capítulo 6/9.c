/* 9. Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho */

#include <stdio.h>

struct atleta {
  char nome[30];
  char esporte[30];
  int idade;
  float altura;
};

typedef struct atleta Atleta;

int main(void) {
  Atleta atletas[5];
  int atletaMV=0, i, iMV, iMA;
  float atletaMA=0;

  for (i=0; i<5; i++) {
    printf("Digite o nome do atleta: ");
    scanf("%s", atletas[i].nome);
    printf("Informe o esporte: ");
    scanf("%s", atletas[i].esporte);
    printf("Informe a idade: ");
    scanf("%d", &atletas[i].idade);
    printf("Informe a altura: ");
    scanf("%f", &atletas[i].altura);
    printf("\n");
    
    if (atletas[i].idade > atletaMV) {
      iMV = i;
      atletaMV = atletas[i].idade;
    }
    if (atletas[i].altura > atletaMA) {
      iMA = i;
      atletaMA = atletas[i].altura;
    }
  }
    printf("Atleta mais velho: %s com %d de idade.\n", atletas[iMV].nome, atletas[iMV].idade);
    printf("Atleta mais alto: %s com %f de altura.\n", atletas[iMA].nome, atletas[iMA].altura);
    
  return 0;
}