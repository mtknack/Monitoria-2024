#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PESSOAS 3

typedef struct {
    char nome[50];
    int idade;
    char sexo;
} Pessoa;

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    
    // Entrada de dados para cada pessoa
    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        getchar(); // Limpar o buffer do teclado
        
        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &pessoas[i].sexo);
        getchar(); // Limpar o buffer do teclado
    }
    
    // Verifica e imprime pessoas do sexo masculino com mais de 21 anos
    printf("\nPessoas do sexo masculino com mais de 21 anos:\n");
    for (int i = 0; i < MAX_PESSOAS; i++) {
        if (pessoas[i].sexo == 'M' && pessoas[i].idade > 21) {
            printf("%s", pessoas[i].nome);
        }
    }
    
    return 0;
}
