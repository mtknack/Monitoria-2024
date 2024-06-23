#include <stdio.h>
#include <stdlib.h>

void main()
{
    float m[12][5], total = 0, mes = 0;
    int i, j, opcao;
    for (i = 0; i < 12; i++)
    {
        printf("\nMes %d:\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Informe o total do produto %d\n", j + 1);
            scanf("%f", &m[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        mes = 0;
        for (j = 0; j < 5; j++)
        {
            mes += m[i][j];
            total += m[i][j];
        }
        printf("\nTotal vendido no mes %d : %f", i + 1, mes);
    }
    printf("\nTotal vendido no ano: %f\n", total);
}
