#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int idade, bom = 0, regular = 0, excelente = 0, opcao, i;
    float mediaIdade = 0, percBom;

    for (i = 1; i <= 3; i++){

        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Responda sua opniao sobre o filme: \n");
        printf("1 - regular\n");
        printf("2 - bom\n");
        printf("3 - excelente\n");
        scanf("%d", &opcao);

        if(opcao == 1){
            regular++;
        }
        else if(opcao == 2){
            bom++;
        }
        else{
            mediaIdade += idade;
            excelente++;
        }
    }

    mediaIdade = mediaIdade / excelente;
    printf("Media de idades das pessoas que responderam excelente: %f\n", mediaIdade);
    printf("Quantidade de pessoas que responderam regular: %d\n", regular);
    percBom = bom;
    percBom = percBom / (i - 1);
    printf("Porcentagem de pessoas que responderam bom: %f\n", percBom);
}