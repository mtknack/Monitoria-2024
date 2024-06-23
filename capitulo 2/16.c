// A confederação brasileira de natação irá promover eliminatórias para o próximo
// mundial. Faça um programa em C que receba a idade de um nadador e imprima
// a sua categoria segundo a tabela a seguir
#include <stdio.h>

void main()
{

    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade <= 4)
    {
        printf("Idade não permitida");
    }
    else
    {
        if (idade <= 7)
        {
            printf("Infantil A: 5 - 7 anos");
        }
        else if (idade <= 10)
        {
            printf("Infantil B: 8 - 10 anos");
        }
        else if (idade <= 13)
        {
            printf("Juvenil A: 11 - 13 anos");
        }
        else if (idade <= 17)
        {
            printf("Juvenil B: 14 - 17 anos");
        }
        else
        {
            printf("Senior: maiores de 18 anos");
        }
    }
}