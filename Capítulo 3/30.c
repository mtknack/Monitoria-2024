#include <stdio.h>
#include <stdlib.h>

void main(){

    int idade, solteiro = 0, casado = 0, viuvo = 0, total = 0;
    char codigo;
    float idadeViuvo = 0, mediaIdadeV, outros = 0, percOutros;

    do
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if(idade < 0)
            break;

        total++;

        printf("\n---[C]-casado------");
        printf("\n---[S]-solteiro----");
        printf("\n---[V]-viuvo-------");
        printf("\n---[D]-separado----");
        printf("\n\n");

        printf("Digite o estado civil: ");
        fflush(stdin);
        scanf("%c", &codigo);

        if (codigo == 'c' || codigo == 'C')
            casado++;
        else if(codigo == 's' || codigo == 'S')
            solteiro++;
        else if(codigo == 'v' || codigo == 'V')
        {
            idadeViuvo += idade;
            viuvo++;
        }
        else
            outros++;

    } while (idade >= 0);

    if(total == 0)
        total = 1;
    
    if(viuvo == 0)
        viuvo = 1;

    mediaIdadeV = idadeViuvo / viuvo;
    percOutros = outros / total;
    
    printf("\nQuantidade de casados: %d", casado);
    printf("\nQuantidade de solteiros: %d", solteiro);
    printf("\nMedia de idade dos viuvos: %.2f", mediaIdadeV);
    printf("\nPorcentagem de pessoas separadas: %.2f", percOutros);
}
