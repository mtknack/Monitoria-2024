#include<stdio.h>
#include<stdlib.h>

// Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.
// Observação: os dois primeiros termos desta série são 1 e 1 e os demaissão gerados a partir da soma dos anteriores. 
// Exemplo:
// • 1 + 1 = 2, terceiro termo;
// • 1 + 2 = 3, quarto termo, etc.

void main(){
    int fib = 1, fib2 = 1, aux;

    printf("%d\n", fib);
    printf("%d\n", fib2);

    for(int i = 2; i < 20; i++){
        aux = fib2;
        fib2 = fib + fib2;
        printf("%d \n", fib2);
        fib = aux;
    }
}