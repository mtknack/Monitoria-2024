#include <stdio.h>
#include <stdlib.h>

int divisao(int dividendo, int divisor){

    int cont = 0;
    while (dividendo >= divisor)
    {
        dividendo = dividendo / divisor;
        cont++;
    }
    return cont;
}

void main()
{
    int dividendo, divisor, div;
    printf("\nDigite o dividendo: ");
    scanf("%d", &dividendo);
    printf("\nDigite o divisor: ");
    scanf("%d", &divisor);

    if(divisor > dividendo){
        printf("\nDivisor maior que dividendo");
    }
    else{
        div = divisao(dividendo, divisor);
        printf("\nNumero de divisoes: %d", div);
    }
}