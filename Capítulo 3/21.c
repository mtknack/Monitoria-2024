#include <stdio.h>
#include <stdlib.h>

void main(){
    
    float rendaPessoal, rendaFamiliar, alimentacao, outros;
    float outrasDespesas = 0, total = 0;
    float percGastamOutras, percAlimentacaoP, percAlimentacaoF;
    float percOutrasP, percOutrasF;
    int nPessoalMaior = 0;

    do{
        printf("Digite a renda pessoal: ");
        scanf("%f", &rendaPessoal);
        if(rendaPessoal == 0)
            break;

        printf("Digite a renda familiar: ");
        scanf("%f", &rendaFamiliar);
        printf("Digite o gasto com alimentacao: ");
        scanf("%f", &alimentacao);
        printf("Digite o gasto com outras despesas: ");
        scanf("%f", &outros);
        total++;

        if(outros > 200)
            outrasDespesas++;
        if(rendaPessoal > rendaFamiliar)
            nPessoalMaior++;
        
        percAlimentacaoP = (alimentacao / rendaPessoal) * 100;
        percAlimentacaoF = (alimentacao / rendaFamiliar) * 100;
        percOutrasP = (outros / rendaPessoal) * 100;
        percOutrasF = (outros / rendaFamiliar) * 100;

        printf("\n---Alimentacao por renda pessoal: %.2f", percAlimentacaoP);
        printf("\n---Alimentacao por renda familiar: %.2f", percAlimentacaoF);
        printf("\n---Outras por renda pessoal: %.2f", percOutrasP);
        printf("\n---Outras por renda familiar: %.2f", percOutrasF);
        printf("\n");

    }while(rendaPessoal != 0);

    percGastamOutras = (outrasDespesas / total) * 100;
    printf("\nPerc gastam acima de 200 outras: %2.f", percGastamOutras);
    printf("\nCom renda pessoal maior familiar: %d", nPessoalMaior);
}