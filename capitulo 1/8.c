#include <stdio.h>
#include <stdlib.h>

// 8. Faça um programa em C que leia dois números inteiros e imprima a subtração deles.
void main(){

    int n1, n2;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);

    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    printf("%d - %d = %d", n1, n2, n1 - n2);
}