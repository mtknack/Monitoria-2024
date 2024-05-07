#include <stdio.h>

int main() {
    float salario, desconto;

    // Solicita ao usuário para inserir o salário
    printf("Digite o salário da pessoa: R$");
    scanf("%f", &salario);

    // Calcula o desconto do INSS de acordo com a faixa de salário
    if (salario <= 600.00) {
        // Isento de desconto
        desconto = 0.00;
    } else if (salario <= 1200.00) {
        // Desconto de 20%
        desconto = salario * 0.20;
    } else if (salario <= 2000.00) {
        // Desconto de 25%
        desconto = salario * 0.25;
    } else {
        // Desconto de 30%
        desconto = salario * 0.30;
    }

    // Exibe o valor do desconto do INSS
    printf("O desconto do INSS é de: R$%.2f\n", desconto);

    return 0;
}
