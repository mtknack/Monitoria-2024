#include <stdio.h>
#include <stdlib.h>

// 11. Faça um programa em C que leia dois números reais e calcule as quatro operações
// básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao
// final, o programa deve imprimir os resultados dos cálculos.
void main(){

   float n1, n2;

   printf("Digite o numero 1: ");
   scanf("%f", &n1);

   printf("Digite o numero 2: ");
   scanf("%f", &n2);

   printf("%f + %f = %f\n", n1, n2, n1 + n2);
   printf("%f - %f = %f\n", n1, n2, n1 - n2);
   printf("%f * %f = %f\n", n1, n2, n1 * n2);
   printf("%f / %f = %f\n", n1, n2, n1 / n2);
}