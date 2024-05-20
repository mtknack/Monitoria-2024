/* 23. Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso e altura) dos atletas que participaram de uma olimpíada, e informar:
  • a atleta do sexo feminino mais alta;
  • o atleta do sexo masculino mais pesado;
  • a média de idade dos atletas.
Obs: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um atleta.
  Para resolver este exercício, consulte a aula 7 que aborda o tratamento de strings, como comparação e atribuição de textos. */
    
#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[50], sexo, nomeFemMaisAlta[50], nomeMascMaisPesado[50];
  int idade, somaIdades = 0, totalAtletas = 0;
  float peso, altura, alturaFemMaisAlta = 0, pesoMascMaisPesado = 0, mediaIdades;

  printf("  # Cadastro de atletas #\n");
  
 while(1){
   printf("Digite o nome do atleta (ou '@' para encerrar): ");
   scanf("\n%[^\n]s", nome);
   if(strcmp(nome, "@") == 0) {
     printf("Encerrando o cadastro...\n\n");
     break;
   }
   
   printf("Digite o sexo do atleta (M/F): ");
   scanf(" %c", &sexo);
   while (sexo != 'M' && sexo != 'F') {
     printf("Sexo inválido. Digite M para masculino ou F para feminino.\n");
     scanf(" %c", &sexo);
   }
   
   printf("Digite a idade do atleta: ");
   scanf("%d", &idade);
   
   printf("Digite o peso do atleta: ");
   scanf("%f", &peso);
   
   printf("Digite a altura do atleta: ");
   scanf("%f", &altura);

   printf("\n");
   somaIdades += idade;
   totalAtletas++;
   
   if(sexo == 'F' && altura > alturaFemMaisAlta) {
     alturaFemMaisAlta = altura;
     strcpy(nomeFemMaisAlta, nome);
   }
   
   if(sexo == 'M' && peso > pesoMascMaisPesado ) {
     pesoMascMaisPesado = peso;
     strcpy(nomeMascMaisPesado, nome);
   }
 }
  if(totalAtletas > 0) {
    mediaIdades = (float)somaIdades/totalAtletas;
    printf("A média de idade dos atletas é: %.2f\n", mediaIdades);
    if(alturaFemMaisAlta > 0) {
      printf("A atleta do sexo feminino mais alta é: %s com %.2fm\n", nomeFemMaisAlta, alturaFemMaisAlta);
    } else {
      printf("Não há atletas do sexo feminino registradas.\n");
    }
    if(pesoMascMaisPesado > 0) {
      printf("O atleta do sexo masculino mais pesado é: %s com %.2fkg, \n", nomeMascMaisPesado, pesoMascMaisPesado);
    } else {
      printf("Não há atletas do sexo masculino registrados.\n");
    }
  } else {
    printf("Nenhum atleta cadastrado.\n");
  }
  return 0;
}