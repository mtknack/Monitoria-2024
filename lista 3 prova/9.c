#include <stdio.h>
#include <math.h>
#define max 5 // alterar para o tamanho desejado

typedef struct elemento{
    int maior;
    int menor;
    int soma;
} Aluno;

Aluno structF(int vetor[50]){
    Aluno aluno;
    aluno.maior = vetor[0];
    aluno.menor = vetor[0];
    aluno.soma = vetor[0];

    for (int i = 1; i < max; i++)
    {
        if(aluno.maior > vetor[i]){
            aluno.maior = vetor[i];
        }
        if(aluno.menor < vetor[i]){
            aluno.menor = vetor[i];
        }
        aluno.soma += vetor[i];
    }

    return aluno;
}

void ponteirosF(int vetor[50], int *maior, int *menor, int *soma){

    *maior = vetor[0];
    *menor = vetor[0];
    *soma = vetor[0];

    for (int i = 1; i < max; i++)
    {
        if(*maior > vetor[i]){
            *maior = vetor[i];
        }
        if(*menor < vetor[i]){
            *menor = vetor[i];
        }
        *soma += vetor[i];
    }
}

void main(){

    int vetor[max];

    printf("Digite os valos do vetor: \n");
    for (int i = 0; i < max; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    // utilizando struct
    Aluno aluno;
    aluno = structF(vetor);

    printf("Resultado com struct\n");
    printf("O maior valor enconrado foi: %d\n", aluno.maior);
    printf("O menor valor enconrado foi: %d\n", aluno.menor);
    printf("A soma dos valores foi de: %d\n", aluno.soma);

    // utilizando ponteiros
    int maior, menor, soma;

    ponteirosF(vetor, &maior, &menor, &soma);

    printf("Resultado com ponteiros\n");
    printf("O maior valor enconrado foi: %d\n", maior);
    printf("O menor valor enconrado foi: %d\n", menor);
    printf("A soma dos valores foi de: %d\n", soma);

}