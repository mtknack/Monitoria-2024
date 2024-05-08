/* 12. Faça um programa que leia a idade de uma pessoa e informe:
• Se é maior de idade
• Se é menor de idade
• Se é maior de 65 anos */
  
  
#include <stdio.h>

int main(void) {
  int idade;
  printf("Insira a idade: ");
  scanf("%d", &idade);
  if(idade >= 18 && idade < 65) {
     printf("Maior de idade");
  } else if(idade >= 0 && idade < 18) {
    printf("Menor de idade");
  } else if (idade >= 65 && idade <= 110) {
    printf("Maior de 65 anos");
  } else {
    printf("Idade inválida");
  }
  return 0;
}