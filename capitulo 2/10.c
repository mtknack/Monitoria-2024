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
            printf("%d, %d, %d",n1 ,n2 ,n3);
        }   
        else{
            printf("%d, %d, %d",n1 ,n3 ,n2);
        }
    }
    else if(n2 < n1 && n2 < n3){
        if(n1 < n3){
            printf("%d, %d, %d",n2 ,n1, n3); 
        }
        else{
            printf("%d, %d, %d",n2 ,n3 ,n1);
        }
    }
    
}