//  Faça um programa em C que leia três números inteiros e imprima os três em ordemcrescente.
#include <stdio.h>

void main(){

    int n1, n2, n3;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);

    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    printf("Digite o numero 3: ");
    scanf("%d", &n3);


    if(n1 < n2 && n1 < n3){
        if(n2 < n3){
            printf("n1: %d, n2: %d, n3: %d\n", n1, n2, n3);
        }
        else{
            printf("n1: %d, n3: %d, n2: %d\n", n1, n3, n2);
        }
    }
    else if(n2 < n1 && n2 < n3){
        if(n1 < n3){
            printf("n2: %d, n1: %d, n3: %d\n", n2, n1, n3);
        }
        else{
            printf("n2: %d, n3: %d, n1: %d\n", n2, n3, n1);
        }
    }
    else{
        if(n2 < n1){
            printf("n3: %d, n2: %d, n1: %d\n", n3, n2, n1);
        }
        else{
            printf("n3: %d, n1: %d, n2: %d\n", n3, n1, n2);
        }
    }
}