#include <stdio.h>

int main() {
    int num_turmas, num_alunos;
    float nota, soma_notas, media_turma;
    int aprovados, total_alunos;
    float percentual_reprovados;

    // Solicita o número de turmas
    printf("Digite o numero de turmas: ");
    scanf("%d", &num_turmas);

    // Loop para cada turma
    for (int i = 1; i <= num_turmas; i++) {
        soma_notas = 0;
        aprovados = 0;

        // Solicita o número de alunos da turma
        printf("Digite o numero de alunos da turma %d: ", i);
        scanf("%d", &num_alunos);

        // Loop para cada aluno da turma
        for (int j = 1; j <= num_alunos; j++) {
            // Solicita e armazena a nota do aluno
            printf("Digite a nota do aluno %d da turma %d: ", j, i);
            scanf("%f", &nota);

            // Calcula a soma das notas
            soma_notas += nota;

            // Verifica se o aluno está aprovado (nota >= 7.0)
            if (nota >= 7.0) {
                aprovados++;
            }
        }

        // Calcula a média da turma
        media_turma = soma_notas / num_alunos;

        // Imprime a quantidade de alunos aprovados e a média da turma
        printf("Turma %d:\n", i);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);
        printf("Media da turma: %.2f\n", media_turma);

        // Atualiza o total de alunos para calcular o percentual de reprovados
        total_alunos += num_alunos;
    }

    // Calcula o percentual de alunos reprovados
    percentual_reprovados = ((float)(total_alunos - aprovados) / total_alunos) * 100;

    // Imprime o percentual de alunos reprovados
    printf("\nPercentual de alunos reprovados: %.2f%%\n", percentual_reprovados);

    return 0;
}
