// Faça um programa que permita entrar como nome, a nota da prova 1 e a nota da prova 2 de um aluno. O programa deve 
// imprimir o nome, a nota da prova 1,anota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado" 
// ou "em Prova Final" (a média é 7 para aprovação, menor que 3 para reprovação e as demais emprovafinal).
#include <stdio.h>

void main(){

    float p1, p2, media;
    char nome[30];

    printf("Digite o nome do Aluno: ");
    scanf("%s", &nome);

    printf("Digite a nota 1: ");
    scanf("%f", &p1);

    printf("Digite a nota 2: ");
    scanf("%f", &p2);

    media = (p1 + p2) / 2;

    printf("Aluno: %s \n", nome);
    printf("Notas -> p1: %f, p2: %f , media %f \n", p1, p2, media);

    if(media >= 7){
        printf("Aprovado\n");
    }
    else if(media >= 3){
        printf("Prova final\n");
    }
    else{
        printf("Reprovado \n");
    }

}