#include <stdio.h>

int main() {
    int num_pessoas, idade, qtd_acima_50 = 0, qtd_10_20 = 0, qtd_abaixo_40 = 0;
    float altura, peso, soma_altura_10_20 = 0, soma_peso = 0;

    // Solicita e armazena o número de pessoas
    printf("Digite o numero de pessoas: ");
    scanf("%d", &num_pessoas);

    // Loop para receber as informações de cada pessoa
    for (int i = 1; i <= num_pessoas; i++) {
        printf("\n=== Pessoa %d ===\n", i);

        // Solicita e armazena a idade da pessoa
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        // Verifica se a idade é superior a 50 anos
        if (idade > 50) {
            qtd_acima_50++;
        }

        // Verifica se a idade está entre 10 e 20 anos
        if (idade >= 10 && idade <= 20) {
            qtd_10_20++;

            // Solicita e armazena a altura da pessoa
            printf("Digite a altura da pessoa (em metros): ");
            scanf("%f", &altura);
            soma_altura_10_20 += altura;
        }

        // Solicita e armazena o peso da pessoa
        printf("Digite o peso da pessoa (em quilogramas): ");
        scanf("%f", &peso);

        // Verifica se o peso é inferior a 40 quilos
        if (peso < 40) {
            qtd_abaixo_40++;
        }

        soma_peso += peso;
    }

    // Calcula a média de altura das pessoas com idade entre 10 e 20 anos
    float media_altura_10_20 = soma_altura_10_20 / qtd_10_20;

    // Calcula a porcentagem de pessoas com peso inferior a 40 quilos
    float porcentagem_abaixo_40 = (float)qtd_abaixo_40 / num_pessoas * 100;

    // Imprime as estatísticas adicionais
    printf("\n=== Estatisticas Adicionais ===\n");
    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", qtd_acima_50);
    printf("Media de altura das pessoas com idade entre 10 e 20 anos: %.2f metros\n", media_altura_10_20);
    printf("Porcentagem de pessoas com peso inferior a 40 quilos: %.2f%%\n", porcentagem_abaixo_40);

    return 0;
}

