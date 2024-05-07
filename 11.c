#include <stdio.h>

int main() {
    int num1, num2, num3, maior;

    // Solicita ao usuário para inserir os três números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Suponha que o primeiro número seja o maior inicialmente
    maior = num1;

    // Verifica se o segundo número é maior
    if (num2 > maior) {
        maior = num2;
    }

    // Verifica se o terceiro número é maior
    if (num3 > maior) {
        maior = num3;
    }

    // Imprime o maior número
    printf("O maior número é: %d\n", maior);

    return 0;
}
