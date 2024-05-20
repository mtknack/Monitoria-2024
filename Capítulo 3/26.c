/* 26. Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, em um determinado dia. Para cada casa visitada foram fornecidos o número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo a ele naquela casa. Se a televisão estivesse desligada, nada seria anotado, ou seja, esta casa não entraria na pesquisa. 
Criar um programa que:
  • Leia um número indeterminado de dados, isto é, o número do canal e o número de pessoas que estavam assistindo;
  • Calcule e imprima a porcentagem de audiência em cada canal.
  Obs.: Para encerrar a entrada de dados, digite o número do canal zero. */
  
#include <stdio.h>

int main(void) {
  int canal;
  float pessoas, total = 0, audiencia4 = 0, audiencia5 = 0, audiencia7 = 0, audiencia12 = 0;

  do {
      printf("Digite o número do canal que está sendo assistido (4, 5, 7, 12): ");
      scanf("%d", &canal);
    
      switch(canal) {
      case 4:
        printf("Digite o número de pessoas que estão assistindo: ");
        scanf("%f", &pessoas);
        audiencia4 += pessoas;
        break;
      case 5:
        printf("Digite o número de pessoas que estão assistindo: ");
        scanf("%f", &pessoas);
        audiencia5 += pessoas;
        break;
      case 7:
        printf("Digite o número de pessoas que estão assistindo: ");
        scanf("%f", &pessoas);
        audiencia7 += pessoas;
        break;
      case 12:
        printf("Digite o número de pessoas que estão assistindo: ");
        scanf("%f", &pessoas);
        audiencia12 += pessoas;
        break;
      default:
        if (canal != 0) {
          printf("Canal inválido!\n\n");
        } else {
          printf("Encerrando a entrada de dados...\n\n");
        }
    }
  } while (canal != 0);

  total = audiencia4 + audiencia5 + audiencia7 + audiencia12;
  if (audiencia4 != 0) {
    printf("Audiência do canal 4: %.2f%\n", (audiencia4/total)*100);
  }
  if (audiencia5 != 0) {
   printf("Audiência do canal 5: %.2f%\n", (audiencia5/total)*100);
  }
  if (audiencia7 != 0) {
    printf("Audiência do canal 7: %.2f\n%", (audiencia7/total)*100);
  }
  if (audiencia12 != 0) {
    printf("Audiência do canal 12: %.2f%\n", (audiencia12/total)*100);
  }
  return 0;
}