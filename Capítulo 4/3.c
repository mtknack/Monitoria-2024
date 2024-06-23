#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void main(){

    int v[TAM], i;
    printf("Digite os %d valores do vetor:\n", TAM);
    for (i = 0; i < TAM; i++){
        scanf("%d", &v[i]);
    }
    
    printf("Posicao \t Numero \n");
    for (i = 0; i < TAM; i++){
        
        if((v[i] % 2) == 0)
            printf("%d \t\t %d \t par\n", i, v[i]);
        else
            printf("%d \t\t %d \t impar\n", i, v[i]);
    }
}