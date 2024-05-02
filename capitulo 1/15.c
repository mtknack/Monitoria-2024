int main() {
    float valor_produto, percentual_desconto, valor_desconto, valor_final;

    // Solicita ao usuário para digitar o valor do produto
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    // Solicita ao usuário para digitar o percentual de desconto desejado
    printf("Digite o percentual de desconto desejado: ");
    scanf("%f", &percentual_desconto);

    // Calcula o valor do desconto
    valor_desconto = (percentual_desconto / 100) * valor_produto;

    // Calcula o valor final do produto após o desconto
    valor_final = valor_produto - valor_desconto;

    // Imprime o valor do desconto e o valor final do produto
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Valor final do produto: R$ %.2f\n", valor_final);

    return 0;
}
