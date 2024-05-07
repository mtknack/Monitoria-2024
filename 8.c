#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para inserir o número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é maior, igual ou menor que 20
    if (numero > 20) {
        printf("Maior do que 20\n");
    } else if (numero == 20) {
        printf("Igual a 20\n");
    } else {
        printf("Menor do que 20\n");
    }

    return 0;
}
