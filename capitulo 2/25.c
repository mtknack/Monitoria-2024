// A prefeitura contratou uma firma especializada para manter os níveis de poluição
// considerados ideais para um país do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala
// utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um
// programa que possa imprimir intimações de acordo com o índice e a tabela a
// seguir:
// Índice | Indústrias que receberão intimação
// 0,3    | 1º gurpo
// 0,4    | 1º e 2º grupos
// 0,5    | 1º, 2º e 3º grupos
#include <stdio.h>
#include <stdlib.h>

void main()
{

    float indice;
    printf("Digite o indice de poluicao: ");
    scanf("%f", &indice);
    if (indice >= 0.5)
    {
        printf("Suspender atividades das industrias dos grupos 1, 2 e 3 \n");
    }
    else if (indice >= 0.4)
    {
        printf("Suspender atividades das industrias dos grupos 1 e 2 \n");
    }
    else if (indice >= 0.3)
    {
        printf("Suspender atividades das industrias do grupo 1 \n");
    }
    else
    {
        printf("Indice de poluicao aceitavel para todos os grupos \n");
    }
}