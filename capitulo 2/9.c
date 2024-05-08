/* 9. Faça um programa em C que permita entrar com o ano de nascimento da pessoa e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o ano de nascimento informado é válido. */
  
#include <stdio.h>

int main(void) {
  int ano_nasc, ano_atual, idade;
  printf("Insira o ano de nascimento: ");
  scanf("%d", &ano_nasc);
  printf("Insira o ano atual: ");
  scanf("%d", &ano_atual);
  if (ano_nasc > ano_atual) {
    printf("Ano de nascimento inválido");
  } else {
    idade = ano_atual - ano_nasc;
    printf("A idade é %d anos", idade);
  }
  return 0;
}