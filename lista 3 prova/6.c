#include<stdio.h>

void METADE(float n){
    printf("A medade de %f eh: %f", n, n / 2);
}

void main(){

    float n;

    printf("Digite os valor de n: W\n");
    scanf("%f", &n);

    METADE(n);

}