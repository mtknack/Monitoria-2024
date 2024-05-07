#include <stdio.h>
#include <string.h>

int main() {
    char prato[20], sobremesa[20], bebida[20];
    int calorias_prato = 0, calorias_sobremesa = 0, calorias_bebida = 0;

    // Solicita ao usuário para inserir o prato, a sobremesa e a bebida
    printf("Escolha o prato (Vegetariano, Peixe, Frango ou Carne): ");
    scanf("%s", prato);

    printf("Escolha a sobremesa (Abacaxi, Sorvete, Mousse ou Chocolate): ");
    scanf("%s", sobremesa);

    printf("Escolha a bebida (Chá, Suco de Laranja, Suco de Melão ou Refrigerante): ");
    scanf("%s", bebida);

    // Calcula as calorias do prato
    if (strcmp(prato, "Vegetariano") == 0) {
        calorias_prato = 180;
    } else if (strcmp(prato, "Peixe") == 0) {
        calorias_prato = 230;
    } else if (strcmp(prato, "Frango") == 0) {
        calorias_prato = 250;
    } else if (strcmp(prato, "Carne") == 0) {
        calorias_prato = 350;
    }

    // Calcula as calorias da sobremesa
    if (strcmp(sobremesa, "Abacaxi") == 0) {
        calorias_sobremesa = 75;
    } else if (strcmp(sobremesa, "Sorvete") == 0) {
        calorias_sobremesa = 110;
    } else if (strcmp(sobremesa, "Mousse") == 0) {
        calorias_sobremesa = 170;
    } else if (strcmp(sobremesa, "Chocolate") == 0) {
        calorias_sobremesa = 200;
    }

    // Calcula as calorias da bebida
    if (strcmp(bebida, "Chá") == 0) {
        calorias_bebida = 20;
    } else if (strcmp(bebida, "Suco de Laranja") == 0) {
        calorias_bebida = 70;
    } else if (strcmp(bebida, "Suco de Melão") == 0) {
        calorias_bebida = 100;
    } else if (strcmp(bebida, "Refrigerante") == 0) {
        calorias_bebida = 65;
    }

    // Calcula a quantidade total de calorias
    int total_calorias = calorias_prato + calorias_sobremesa + calorias_bebida;

    // Exibe a quantidade total de calorias
    printf("A quantidade total de calorias da refeição é: %d cal\n", total_calorias);

    return 0;
}
