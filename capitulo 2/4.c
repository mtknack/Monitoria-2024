// Faça um programa que leia um número e informe se ele é ou não divisível por 5.
#include <stdio.h>

void main(){

    int numero;

    printf("Digite o numero para checar se e divisivel por 5: ");
    scanf("%d", &numero);

    if(numero % 5 == 0){
        printf("E divisivel por 5\n");
    }
    else{
        printf("Nao e divisivel por 5\n");
    }
}