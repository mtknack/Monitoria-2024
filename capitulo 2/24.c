/* 24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dos motoristas o DUT. Sabendo-se que o mês em que o em placamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe o mês em que o emplacamento deve ser renovado. */

#include <stdio.h>

int main(void) {
  char placa[7];
  printf("Insira a placa do carro (7 dígitos): ");
  scanf("%s", placa);
  switch (placa[6]) {
    case '1': 
    printf("O emplacamento deve ser renovado em Janeiro");
    break;
    case '2':
    printf("O emplacamento deve ser renovado em Fevereiro");
    break;
    case '3':
    printf("O emplacamento deve ser renovado em Março");
    break;
    case '4':
    printf("O emplacamento deve ser renovado em Abril");
    break;
    case '5':
    printf("O emplacamento deve ser renovado em Maio");
    break;
    case '6':
    printf("O emplacamento deve ser renovado em Junho");
    break;
    case '7':
    printf("O emplacamento deve ser renovado em Julho");
    break;
    case '8':
    printf("O emplacamento deve ser renovado em Agosto");
    break;
    case '9':
    printf("O emplacamento deve ser renovado em Setembro");
    break;
    case '0':
    printf("O emplacamento deve ser renovado em Outubro");
    break;
    default:
    printf("Placa inválida");
    break;
  }
  return 0;
}