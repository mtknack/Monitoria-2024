#include <stdio.h>
#include <stdlib.h>

// 8. Faça um programa em C que leia dois números inteiros e imprima a subtração deles.
void main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("%d - %d = %d\n", n1, n2, n1 - n2);
}