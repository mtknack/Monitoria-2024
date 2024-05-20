#include <stdio.h>

int main() {
    int dividendo, divisor, resto = 0;

    // Solicita e armazena os números do dividendo e divisor
    printf("Digite o dividendo (maior que o divisor): ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    // Realiza subtrações sucessivas até que o dividendo seja menor que o divisor
    while (dividendo >= divisor) {
        dividendo -= divisor;
        resto = dividendo;
    }

    // Imprime o resto da divisão
    printf("O resto da divisao e: %d\n", resto);

    return 0;
}
