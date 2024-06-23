#include <stdio.h>
#include <stdlib.h>
#define TAM 30

void main()
{
    int contCadeiras = 0, numero, cadeiras, i;
    int mesas[TAM];

    for (i = 0; i < TAM; i++)
        mesas[i] = 0;

    do
    {
        printf("\nDigite o numero da mesa para reserva:\n");
        scanf("%d", &numero);
        if (numero > 100 && numero < 130)
        {
            printf("\nDigite o numero de cadeiras\n");
            scanf("%d", &cadeiras);
            if (cadeiras > 0 && cadeiras < 6)
            {
                int n = numero % 100;
                if (mesas[n] + cadeiras < 6)
                {
                    printf("\nFoi possivel reservar/atualizar a reserva!");
                    mesas[n] += cadeiras;
                    contCadeiras += cadeiras;
                }
                else
                    printf("\nMesa nao possui a quantidade de cadeiras solicitada\n");
            }
            else
                printf("\nMesa nao possui a quantidade de cadeiras solicitada\n");
        }
        else
            printf("\nNumero invalido\n");

        if (contCadeiras == 150)
            break;

    } while (numero != 0);
}