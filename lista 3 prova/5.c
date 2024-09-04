#include<stdio.h>

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void main(){

    int x, y;

    printf("Digite os valores de x e y: \n");
    scanf("%d %d", &x, &y);

    troca(&x, &y);

    printf("O valor de x eh: %d e o valor de y eh: %d\n", x, y);
}