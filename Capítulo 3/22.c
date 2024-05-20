#include <stdio.h>

int main() {
    int num_carteira, num_multas, maior_num_multas = 0, num_carteira_maior_multas;
    float valor_multa, total_recursos = 0, valor_divida;

    // Loop para ler as informações de cada motorista
    while (1) {
        // Solicita e armazena o número da carteira de motorista
        printf("Digite o numero da carteira de motorista (ou 0 para sair): ");
        scanf("%d", &num_carteira);

        if (num_carteira == 0) {
            break; // Sai do loop se o número da carteira for 0
        }

        // Solicita e armazena o número de multas
        printf("Digite o numero de multas: ");
        scanf("%d", &num_multas);

        // Inicializa a variável para armazenar o valor total das multas
        valor_divida = 0;

        // Loop para solicitar e somar o valor de cada multa
        for (int i = 1; i <= num_multas; i++) {
            printf("Digite o valor da multa %d: ", i);
            scanf("%f", &valor_multa);
            valor_divida += valor_multa;
        }

        // Atualiza o total de recursos arrecadados
        total_recursos += valor_divida;

        // Verifica se o motorista tem o maior número de multas
        if (num_multas > maior_num_multas) {
            maior_num_multas = num_multas;
            num_carteira_maior_multas = num_carteira;
        }

        // Imprime o valor da dívida para o motorista atual
        printf("O valor da divida para o motorista %d e: %.2f\n", num_carteira, valor_divida);
    }

    // Imprime o total de recursos arrecadados
    printf("Total de recursos arrecadados: %.2f\n", total_recursos);

    // Imprime o número da carteira do motorista com o maior número de multas
    printf("Motorista com o maior numero de multas: %d (Multas: %d)\n", num_carteira_maior_multas, maior_num_multas);

    return 0;
}
