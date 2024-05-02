#include <stdio.h>

int main() {
    float numero, quadrado;

    // Solicita ao usuário para digitar um número real
    printf("Digite um número real: ");
    scanf("%f", &numero);

    // Calcula o quadrado do número fornecido
    quadrado = numero * numero;

    // Imprime o resultado
    printf("O quadrado de %.2f é %.2f\n", numero, quadrado);

    return 0;
}
