#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaLetra(char c[100], char caracter)
{
    int i, cont = 0;
    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] == caracter)
        {
            c[i] = '*';
            cont++;
        }
    }

    for (i = 0; i < strlen(c); i++)
        printf("%c", c[i]);
    return cont;
}

void main()
{
    char c[100], caracter;
    printf("\nDigite a frase: ");
    gets(c);
    printf("\nDigite o caracter: ");
    scanf("%c", &caracter);
    int cont = contaLetra(c, caracter);
    printf("\nQuantidade de caracters encontrados: %d", cont);
}