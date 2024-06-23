#include <stdio.h>
#include <stdlib.h>

typedef struct dataNascimento
{
    int dia;
    int mes;
    int ano;
} DataNascimento;

typedef struct pessoa
{
    char nome[30];
    DataNascimento nascimento;
} Pessoa;

void main()
{
    Pessoa pessoas[6];
    DataNascimento nascimentoMaior, nascimentoMenor;
    nascimentoMaior.ano = 0;
    nascimentoMenor.ano = 0;
    int i, iMaior = 0, iMenor = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Informe o nome:\n");
        scanf("%s", &pessoas[i].nome);
        printf("Informe o nascimento <Dia <enter> Mes <enter> Ano <enter>:\n");
        scanf("%d", &pessoas[i].nascimento.dia);
        scanf("%d", &pessoas[i].nascimento.mes);
        scanf("%d", &pessoas[i].nascimento.ano);
        // pessoa mais velha
        if ((pessoas[i].nascimento.ano < nascimentoMenor.ano || i == 0) ||
            (pessoas[i].nascimento.ano == nascimentoMenor.ano &&
             pessoas[i].nascimento.mes < nascimentoMenor.mes) ||
            (pessoas[i].nascimento.ano == nascimentoMenor.ano &&
             pessoas[i].nascimento.mes == nascimentoMenor.mes &&
             pessoas[i].nascimento.dia < nascimentoMenor.dia))
        {
            iMenor = i;
            nascimentoMenor.dia = pessoas[i].nascimento.dia;
            nascimentoMenor.mes = pessoas[i].nascimento.mes;
            nascimentoMenor.ano = pessoas[i].nascimento.ano;
        }
        // pessoa mais jovem
        if ((pessoas[i].nascimento.ano > nascimentoMaior.ano) ||
            (pessoas[i].nascimento.ano == nascimentoMaior.ano &&
             pessoas[i].nascimento.mes > nascimentoMaior.mes) ||
            (pessoas[i].nascimento.ano == nascimentoMaior.ano &&
             pessoas[i].nascimento.mes == nascimentoMaior.mes &&
             pessoas[i].nascimento.dia > nascimentoMaior.dia))
        {
            iMaior = i;
            nascimentoMaior.dia = pessoas[i].nascimento.dia;
            nascimentoMaior.mes = pessoas[i].nascimento.mes;
            nascimentoMaior.ano = pessoas[i].nascimento.ano;
        }
    }
    printf("---------Pessoa mais velha---------\n");
    printf("Nome........: %s\n", pessoas[iMenor].nome);
    printf("Nascimento..: %d/%d/%d\n", pessoas[iMenor].nascimento.dia,
           pessoas[iMenor].nascimento.mes,
           pessoas[iMenor].nascimento.ano);
    printf("---------Pessoa mais jovem---------\n");
    printf("Nome........: %s\n", pessoas[iMaior].nome);
    printf("Nascimento..: %d/%d/%d\n", pessoas[iMaior].nascimento.dia,
           pessoas[iMaior].nascimento.mes,
           pessoas[iMaior].nascimento.ano);
}