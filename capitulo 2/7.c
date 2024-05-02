// Faça um programa em C que leia um número e indique se o número está compreendido entre 20 e 50 ou não
#include <stdio.h>

void main(){

    float numero;

    printf("Digite o numero: ");
    scanf("%f", &numero);

    if(numero >= 20 && numero <= 50){
        printf("O numero esta entre 20 e 50\n");
    }
    else{
        printf("O numero nao esta entre 20 e 50\n");
    }
}