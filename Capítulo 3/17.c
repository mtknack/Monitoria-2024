/* 17. Crie um programa em C que possa ler um conjunto de pedidos de compra e calcule o valor total da compra. Cada pedido é composto pelos seguintes campos:
  • número de pedido
  • data do pedido (dia, mês, ano)
  • preço unitário
  • quantidade
  O programa deverá processar novos pedidos até que o usuário digite 0 (zero) como número do pedido. */

#include <stdio.h>

int main(void) {
  int num, dia, mes, ano, quant;
  float preco, total = 0;
  
  do {
    printf("Digite o número do pedido: ");
    scanf("%d", &num);
    if (num != 0) {
      printf("Digite a data do pedido (dia, mes, ano): ");
      scanf("%d %d %d", &dia, &mes, &ano);
      printf("Digite o preço unitário: ");
      scanf("%f", &preco);
      printf("Digite a quantidade: ");
      scanf("%d", &quant);
      total += quant*preco;
    }
  } while (num != 0);

  printf("\nValor total da compra: %.2fR$", total);
  
  return 0;
}