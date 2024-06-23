#include <stdio.h>
#include <stdlib.h>
#define TAM 50

struct dados
{
    char endereco[50];
    char telefone[12];
    char nascimento[12];
};

struct clube
{
    char nome[30];
    int idade;
    int carteira;
    struct dados data;
    
}
clube[TAM];

void main()
{
    int i;

    // le as informacoes
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o nome: ");
        gets(clube[i].nome);
        printf("Digite a idade: ");
        scanf("%d", &clube[i].idade);
        printf("Digite o numero da carteira de socio: ");
        scanf("%d%*c", &clube[i].carteira);
        printf("Digite o endereco: ");
        gets(clube[i].data.endereco);
        printf("Digite o telefone: ");
        gets(clube[i].data.telefone);
        printf("Digite sua data de nascimento: ");
        gets(clube[i].data.nascimento);

    }
    printf("Nome\t\tIdade\tCarteira\tEnd\t\t\tTel\t\tNasc\n");
    // escreve na saida padrao
        for (i = 0; i < TAM; i++)
    {
        printf("%s\t\t", clube[i].nome);
        printf("%d\t", clube[i].idade);
        printf("%d\t", clube[i].carteira);
        printf("%s\t\t\t", clube[i].data.endereco);
        printf("%s\t\t", clube[i].data.telefone);
        printf("%s\n", clube[i].data.nascimento);
    }
}