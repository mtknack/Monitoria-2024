/* 12. Uma floricultura conhecedora de sua clientela gostaria de fazer um programa que pudesse controlar sempre um estoque mínimo de determinadas plantas, pois todo dia, pela manhã, o dono faz novas aquisições. Criar um algoritmo que deixe cadastrar 50 plantas, nome, estoque mínimo, estoque atual. Imprimir ao final do programa uma lista das plantas que devem ser adquiridas.  */

#include <stdio.h>
#include <string.h>

#define numplantas 50

int main(void) {
  char nomes[numplantas][50]; 
  //o segundo número indica o tamanho máximo de caracteres de cada linha
  int estoque[numplantas][2];  
  // coluna 1 = estoque atual / coluna 2 = estoque minimo
  int i, j;

  for (int i = 0; i < numplantas; i++) {
    printf("Cadastro da planta %d:\n", i + 1);
    
    printf("\nNome da planta: ");
    fgets(nomes[i], 50, stdin);
    
    // Remover o caractere de nova linha adicionado por fgets
    nomes[i][strcspn(nomes[i], "\n")] = '\0';
    
    printf("Estoque atual: ");
    scanf("%d", &estoque[i][0]);
    printf("Estoque mínimo: ");
    scanf("%d", &estoque[i][1]);
    printf("\n");
    
    // Limpar o buffer de entrada**Obs no fim
    while (getchar() != '\n'); // Consome caracteres restantes até nova linha
  }

  printf("\n\n # Plantas com estoque baixo #\n\n");
  for (i=0; i < numplantas; i++) {
    if (estoque[i][0] < estoque[i][1]){
      printf("%s:", nomes[i]);
      printf("\n-> Estoque Atual:%d/Estoque Mínimo:%d. \n", estoque[i][0], estoque[i][1]);
    }
  }
  
  return 0;
}

/* **OBSERVAÇÃO:
A função strcspn() localiza a primeira ocorrência de um caractere em string1 que pertence ao conjunto de caracteres especificado por string2. Os caracteres nulos não são considerados na procura.

stdin: dispositivo de entrada padrão (geralmente o teclado)

getchar(): É uma função em C que lê 1 caractere do fluxo de entrada padrão (normalmente o teclado quando estamos interagindo com um programa em execução no terminal).

getchar() != '\n'   -> Aqui, getchar() lê um caractere e verifica se não é igual a \n (nova linha). 

O trecho de código while (getchar() != '\n') cria um loop que continua a executar enquanto não for pressionada a tecla Enter. Portanto, o propósito desse loop é consumir todos os caracteres que foram digitados até que seja pressionada a tecla Enter, isso é comumente usado para limpar o buffer de entrada, ou seja, garantir que não haja caracteres indesejados no buffer antes de prosseguir para a próxima parte do código.*/
