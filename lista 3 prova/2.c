#include <stdio.h>

float CUBO(float n){
    return n * n * n;
}

void main(){

    int n;

    printf("Digite o valor: ");
    scanf("%d", &n);

    printf("O valor do cubo eh: %.2f", CUBO(n));
}