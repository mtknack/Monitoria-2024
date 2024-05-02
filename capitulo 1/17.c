#include <stdio.h>
#include <stdlib.h>

// 17. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. 
// Para isso, leia o valor em centígrados e calcule com base na fórmula a
// seguir. Após calcular o programa deve imprimir o resultado da conversão.
// (centigrados * 1.8) + 32
void main(){

    float centigrados, fahrenheit;

    printf("Digite o valor em centigrados: ");
    scanf("%f", &centigrados);

    fahrenheit = (centigrados * 1.8) + 32;

    printf("A conversao e igual a: %f\n", fahrenheit);
    
}