#include <stdio.h>
#include <stdlib.h>

// 20. Faça um programa em C que efetue a apresentação do valor da conversão em
// real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o
// valor da cotação do dólar.
void main(){

    float valor, conversao;

    printf("Digite o valor da cotacao do dolar US$: ");
    scanf("%f", &conversao);

    printf("Digite o valor para ser convertido US$: ");
    scanf("%f", &valor);

    valor = valor * conversao;

    printf("Valor convertido e de R$: %f\n", valor);
}