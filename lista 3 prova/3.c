#include <stdio.h>

float DOBRO(float n){
    return n * 2;
}

void main(){

    float n;

    printf("Digite o valor: ");
    scanf("%f", &n);

    printf("O valor do DOBRO eh: %.2f", DOBRO(n));
}