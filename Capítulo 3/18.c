#include <stdio.h>
#include <stdlib.h>

void main(){

    int n, dias;
    float total;
    char nome[100];

    do{
        printf("Digite o numero da conta: ");
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        
        printf("Digite o nome do cliente: ");
        fflush(stdin);
        fgets(nome, 100, stdin);

        printf("Digite a quantidade de dias: ");
        scanf("%d", &dias);

        if (dias < 10){
            total = (dias * 30) + (dias * 15);
        }
        else{
            total = (dias * 30) + (dias * 8);
        }
        
        printf("%s\n", nome);
        printf("Custo: %.2f\n", total);

    }while (n != 0);
}