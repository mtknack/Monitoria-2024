#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
    int dia;
    int mes;
    int ano;
} Data;

void main()
{
    Data data1, data2;
    int dias;

    printf("Informe a primeira data <Dia <enter> Mes <enter> Ano <enter>:\n");
    scanf("%d", &data1.dia);
    scanf("%d", &data1.mes);
    scanf("%d", &data1.ano);
    printf("Informe a segunda data <Dia <enter> Mes <enter> Ano <enter>:\n");
    scanf("%d", &data2.dia);
    scanf("%d", &data2.mes);
    scanf("%d", &data2.ano);

    dias = (data2.ano - data1.ano - 1) * 365;
    dias += ((12 - data1.mes) * 30) + (data2.mes * 30);
    dias += data1.dia + data2.dia;
    
    printf("Total de dias: %d\n", dias);
}