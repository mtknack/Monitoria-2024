#include <stdio.h>

int main() {
    int CIC, num_dependentes, num_contribuintes_isentos = 0;
    float renda_bruta_anual, renda_liquida, imposto, total_imposto_arrecadado = 0;

    // Loop para ler as informações de cada contribuinte
    while (1) {
        // Solicita e armazena o CIC (Cadastro de Pessoa Física)
        printf("Digite o CIC do contribuinte (ou 0 para sair): ");
        scanf("%d", &CIC);

        if (CIC == 0) {
            break; // Sai do loop se o CIC for 0
        }

        // Solicita e armazena o número de dependentes
        printf("Digite o numero de dependentes: ");
        scanf("%d", &num_dependentes);

        // Solicita e armazena a renda bruta anual
        printf("Digite a renda bruta anual (em reais): ");
        scanf("%f", &renda_bruta_anual);

        // Calcula a renda líquida subtraindo o abatimento com os dependentes da renda bruta anual
        renda_liquida = renda_bruta_anual - (600 * num_dependentes);

        // Calcula o imposto de renda de acordo com a tabela fornecida
        if (renda_liquida <= 1000) {
            imposto = 0; // Isento
            num_contribuintes_isentos++;
        } else if (renda_liquida <= 5000) {
            imposto = renda_liquida * 0.15; // 15% de imposto
        } else {
            imposto = renda_liquida * 0.25; // 25% de imposto
        }

        // Atualiza o total de imposto arrecadado pela Receita Federal
        total_imposto_arrecadado += imposto;

        // Imprime o número do CIC e o imposto a ser pago pelo contribuinte atual
        printf("CIC: %d - Imposto a ser pago: R$%.2f\n", CIC, imposto);
    }

    // Imprime o total do imposto arrecadado pela Receita Federal e o número de contribuintes isentos
    printf("Total de imposto arrecadado: R$%.2f\n", total_imposto_arrecadado);
    printf("Numero de contribuintes isentos: %d\n", num_contribuintes_isentos);

    return 0;
}
