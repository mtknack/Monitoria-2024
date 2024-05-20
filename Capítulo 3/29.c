/* 29. Construa um programa que receba o valor e o código de várias mercadorias
  vendidas em umdeterminado dia. Os códigos obedecem a lista a seguir:
  L-limpeza
  A-Alimentação
  H-Higiene
  Calcule e imprima:
  • o total vendido naquele dia, com todos os códigos juntos;
  • o total vendido naquele dia em cada um dos códigos.
  Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero. */

#include <stdio.h>

int main(void) {
  char codigo;
  float valor, totalGeral = 0, totalL = 0, totalA = 0, totalH = 0;

  do {
    printf("Digite o código da mercadoria (L-limpeza, A-Alimentação, H-Higiene): ");
    scanf(" %c", &codigo);
    if(codigo == 'L' || codigo == 'A' || codigo == 'H') {
      printf("Digite o valor da mercadoria, caso queira encerrar digite 0: ");
      scanf("%f", &valor);
      printf("\n");
      if (valor == 0) {
        break;
      }
    }
    switch(codigo) {
      case 'L':
         totalGeral += valor;
         totalL += valor;
         break;
      case 'A':
        totalGeral += valor;
        totalA += valor;
        break;
       case 'H':
        totalGeral += valor;
         totalH += valor;
        break;
      default:
        printf("Código inválido. Tente novamente.\n");
        break;
      }
    } while (1);
  printf("\nTotal vendido no dia: R$%.2f\n", totalGeral);
  printf("Total vendido na categoria Limpeza: R$%.2f\n", totalL);
  printf("Total vendido na categoria Alimentação: R$%.2f\n", totalA);
  printf("Total vendido na categoria Higiene: R$%.2f\n", totalH);
  return 0;
}