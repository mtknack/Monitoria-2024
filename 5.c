#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para inserir o número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é divisível por 3 e por 7
    if (numero % 3 == 0 && numero % 7 == 0) {
        printf("O número %d é divisível por 3 e por 7.\n", numero);
    } else {
        printf("O número %d não é divisível por 3 e por 7.\n", numero);
    }

    return 0;
}
