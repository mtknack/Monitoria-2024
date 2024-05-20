#include <stdio.h>

int main() {
    int num_consumidor, tipo_consumidor;
    float kWh_consumidos, preco_por_kWh, custo_total;
    float total_residencial = 0, total_comercial = 0, total_industrial = 0;
    float total_consumo_tipo1 = 0, total_consumo_tipo2 = 0;
    int num_consumidores = 0, num_tipo1_tipo2 = 0;

    // Loop para ler os dados de cada consumidor
    while (1) {
        // Solicita e armazena os dados do consumidor
        printf("Digite o número do consumidor (ou 0 para sair): ");
        scanf("%d", &num_consumidor);
        
        if (num_consumidor == 0) {
            break; // Sai do loop se o número do consumidor for 0
        }

        printf("Digite a quantidade de kWh consumidos durante o mês: ");
        scanf("%f", &kWh_consumidos);

        printf("Digite o tipo de consumidor (1-residencial, 2-comercial, 3-industrial): ");
        scanf("%d", &tipo_consumidor);

        // Determina o preço por kWh com base no tipo de consumidor
        switch (tipo_consumidor) {
            case 1:
                preco_por_kWh = 0.3;
                total_residencial += kWh_consumidos;
                break;
            case 2:
                preco_por_kWh = 0.5;
                total_comercial += kWh_consumidos;
                num_tipo1_tipo2++;
                total_consumo_tipo1 += kWh_consumidos;
                break;
            case 3:
                preco_por_kWh = 0.7;
                total_industrial += kWh_consumidos;
                break;
            default:
                printf("Tipo de consumidor inválido!\n");
                continue; // Volta ao início do loop para ler os dados do próximo consumidor
        }

        // Calcula o custo total para o consumidor atual
        custo_total = kWh_consumidos * preco_por_kWh;

        // Imprime o custo total para o consumidor atual
        printf("Custo total para o consumidor %d: %.2f\n", num_consumidor, custo_total);

        // Atualiza o número total de consumidores
        num_consumidores++;
    }

    // Calcula o total de consumo para os três tipos de consumidor
    float total_consumo_geral = total_residencial + total_comercial + total_industrial;

    // Calcula a média de consumo dos tipos 1 e 2
    float media_consumo_tipo1_tipo2 = total_consumo_tipo1 / num_tipo1_tipo2;

    // Imprime o total de consumo para os três tipos de consumidor
    printf("\nTotal de consumo para os três tipos de consumidor:\n");
    printf("Residencial: %.2f kWh\n", total_residencial);
    printf("Comercial: %.2f kWh\n", total_comercial);
    printf("Industrial: %.2f kWh\n", total_industrial);

    // Imprime a média de consumo dos tipos 1 e 2
    printf("\nMédia de consumo dos tipos 1 e 2: %.2f kWh\n", media_consumo_tipo1_tipo2);

    return 0;
}
