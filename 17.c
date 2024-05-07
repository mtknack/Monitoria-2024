#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float valor;

    // Solicita ao usuário para inserir o nome e a idade
    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Calcula o valor do plano de saúde de acordo com a idade
    if (idade <= 10) {
        valor = 30.00;
    } else if (idade <= 29) {
        valor = 60.00;
    } else if (idade <= 45) {
        valor = 120.00;
    } else if (idade <= 59) {
        valor = 150.00;
    } else if (idade <= 65) {
        valor = 250.00;
    } else {
        valor = 400.00;
    }

    // Exibe o nome da pessoa e o valor do plano de saúde
    printf("Nome: %s\n", nome);
    printf("Valor do plano de saúde: R$%.2f\n", valor);

    return 0;
}
