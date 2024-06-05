/*8. Construa um programa que armazene o código, a quantidade, o valor de compra
  e o valor de venda de 30 produtos. A listagem pode ser de todos os produtos ou
  somente de uma se digitar o código. */

#include <stdio.h>

#define N 30
  
int main(void) {
  int i, codigo[N], qtd[N], cod;
  float valorC[N], valorV[N];

  for(i = 0; i < N; i++){
    printf("Digite o código do produto: ");
    scanf("%d", &codigo[i]);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &qtd[i]);
    printf("Digite o valor de compra do produto: ");
    scanf("%f", &valorC[i]);
    printf("Digite o valor de venda do produto: ");
    scanf("%f", &valorV[i]);
  }

  while(cod != 3) {
    printf("\n\n  # Menu: # \n 1 - Listar todos os produtos\n 2 - Listar produto por código\n 3 - Finalizar programa\n");
    scanf("%d", &cod);
    switch(cod) {
      case 1:
        printf("\nCódigo: Quantidade: Valor de Compra: Valor de Venda: \n");
        for(i = 0; i < N; i++){
          printf("%7d", codigo[i]);
          printf("%12d", qtd[i]);
          printf("%17.2f", valorC[i]);
          printf("%16.2f\n", valorV[i]);
        }
      break;
      case 2:
        printf("\nDigite o código do produto: ");
        scanf("%d", &cod);
        for (i = 0; i < N; i++) {
          if(cod == codigo[i]) {
            printf("\n-> Código %d: \nQuantidade: %d, Valor de compra: %.2f, Valor de venda: %.2f\n", cod, qtd[i], valorC[i], valorV[i]);
            cod = 0;
          }
        }
        if(cod != 0) {
          printf("\nCódigo não encontrado.\n");
        }
      break;
      case 3:
        printf("\nPrograma finalizado.");
      break;
      default:
        printf("Opção inválida");
    }
  }

  return 0;
}