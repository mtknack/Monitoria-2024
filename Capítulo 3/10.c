#include <stdio.h>

#define NUM_PAISES 2
#define NUM_JOGADORES 2

struct Jogador {
    float peso;
    int idade;
};

struct Pais {
    char nome[50];
    struct Jogador jogadores[NUM_JOGADORES];
};

int main() {
    struct Pais paises[NUM_PAISES];
    float peso_total_todos = 0, idade_total_todos = 0;
    int num_total_jogadores = NUM_PAISES * NUM_JOGADORES;

    // Entrada de dados
    for (int i = 0; i < NUM_PAISES; i++) {
        printf("Digite o nome do país %d: ", i + 1);
        scanf("%s", paises[i].nome);

        printf("Digite os dados dos jogadores do país %d:\n", i + 1);
        for (int j = 0; j < NUM_JOGADORES; j++) {
            printf("Jogador %d:\n", j + 1);
            printf("Peso: ");
            scanf("%f", &paises[i].jogadores[j].peso);

            printf("Idade: ");
            scanf("%d", &paises[i].jogadores[j].idade);

            peso_total_todos += paises[i].jogadores[j].peso;
            idade_total_todos += paises[i].jogadores[j].idade;
        }
    }

    // Cálculo das informações
    printf("\nInformações por país:\n");
    for (int i = 0; i < NUM_PAISES; i++) {
        float peso_total = 0, idade_total = 0;
        float peso_medio, idade_media;
        float peso_mais_pesado = 0;
        int idade_mais_jovem = paises[i].jogadores[0].idade;

        for (int j = 0; j < NUM_JOGADORES; j++) {
            peso_total += paises[i].jogadores[j].peso;
            idade_total += paises[i].jogadores[j].idade;

            if (paises[i].jogadores[j].peso > peso_mais_pesado) {
                peso_mais_pesado = paises[i].jogadores[j].peso;
            }

            if (paises[i].jogadores[j].idade < idade_mais_jovem) {
                idade_mais_jovem = paises[i].jogadores[j].idade;
            }
        }

        peso_medio = peso_total / NUM_JOGADORES;
        idade_media = idade_total / NUM_JOGADORES;

        printf("\nPais: %s\n", paises[i].nome);
        printf("Peso médio: %.2f\n", peso_medio);
        printf("Idade média: %.2f\n", idade_media);
        printf("Atleta mais pesado: %.2f\n", peso_mais_pesado);
        printf("Atleta mais jovem: %d\n", idade_mais_jovem);
    }

    // Cálculo das médias gerais
    float peso_medio_todos = peso_total_todos / num_total_jogadores;
    float idade_media_todos = idade_total_todos / num_total_jogadores;

    printf("\nMédia geral:\n");
    printf("Peso médio de todos os participantes: %.2f\n", peso_medio_todos);
    printf("Idade média de todos os participantes: %.2f\n", idade_media_todos);

    return 0;
}
