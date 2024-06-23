#include <stdio.h>
#include <stdlib.h>
#define TAM 20

void main()
{

    int i;
    float salarios[TAM], salariosReaj[TAM];
    for (i = 0; i < TAM; i++)
    {

        printf("\nDigite o salario:\n");
        scanf("%f", &salarios[i]);
        salariosReaj[i] = salarios[i] + (salarios[i] * 0.08);
    }

    printf("\nNumero \t Salario \t Salario Reajustado\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d \t", i + 1);
        printf("%.2f \t", salarios[i]);
        printf("%.2f \n", salariosReaj[i]);
    }
}