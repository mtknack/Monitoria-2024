#include <stdio.h>

int main() {
    float saldo_medio, credito;

    // Solicita ao usuário para inserir o saldo médio
    printf("Digite o saldo médio do cliente: R$");
    scanf("%f", &saldo_medio);

    // Calcula o valor do crédito de acordo com o saldo médio
    if (saldo_medio >= 0 && saldo_medio <= 500) {
        credito = 0.00;
    } else if (saldo_medio <= 1000) {
        credito = saldo_medio * 0.30;
    } else if (saldo_medio <= 3000) {
        credito = saldo_medio * 0.40;
    } else {
        credito = saldo_medio * 0.50;
    }

    // Exibe o saldo médio e o valor do crédito
    printf("Saldo Médio: R$%.2f\n", saldo_medio);
    printf("Valor do crédito: R$%.2f\n", credito);

    return 0;
}
