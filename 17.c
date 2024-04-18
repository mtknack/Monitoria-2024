#include <stdio.h>
#include <stdlib.h>

// 17. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. 
// Para isso, leia o valor em centígrados e calcule com base na fórmula a
// seguir. Após calcular o programa deve imprimir o resultado da conversão.
void main(){

    float centigrados, fahrenheit;

    printf("Digite a valor en centigrados: ");
    scanf("%f", &centigrados);

    fahrenheit = (9 * centigrados + 160) / 5;

    printf("A conversao é igual a: %f", fahrenheit);
}