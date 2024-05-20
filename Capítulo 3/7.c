#include <stdio.h>

#define NUM_ALUNOS 15

int main() {
    char nomes[NUM_ALUNOS][50];
    float notas_prova1[NUM_ALUNOS];
    float notas_prova2[NUM_ALUNOS];
    float media_aluno[NUM_ALUNOS];
    float soma_notas = 0;

    // Entrada de dados para cada aluno
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        
        printf("Digite a nota da prova 1 do aluno %d: ", i + 1);
        scanf("%f", &notas_prova1[i]);
        
        printf("Digite a nota da prova 2 do aluno %d: ", i + 1);
        scanf("%f", &notas_prova2[i]);

        // Calcula a média do aluno
        media_aluno[i] = (notas_prova1[i] + notas_prova2[i]) / 2;

        // Acumula as notas para calcular a média geral da turma
        soma_notas += media_aluno[i];
    }

    // Imprime a listagem de alunos e suas médias
    printf("\nListagem de Alunos e Médias:\n");
    printf("------------------------------------------\n");
    printf("Nome\tNota Prova 1\tNota Prova 2\tMédia\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("%s\t%.2f\t\t%.2f\t\t%.2f\n", nomes[i], notas_prova1[i], notas_prova2[i], media_aluno[i]);
    }
    printf("------------------------------------------\n");

    // Calcula e imprime a média geral da turma
    float media_geral = soma_notas / NUM_ALUNOS;
    printf("\nMédia Geral da Turma: %.2f\n", media_geral);

    return 0;
}
