#include <stdio.h>

int main() {
    int valor1, valor2, soma;

    // Solicita ao usuário para inserir os dois valores
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    // Calcula a soma dos dois valores
    soma = valor1 + valor2;

    // Verifica se a soma é maior que 20
    if (soma > 20) {
        // Se for, soma mais 8
        soma += 8;
    } else {
        // Se não, subtrai 5
        soma -= 5;
    }

    // Exibe o resultado
    printf("O resultado da operação é: %d\n", soma);

    return 0;
}
