/* 2. Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada. */
  
#include <stdio.h>

int main(void) {
  int i;
  char letras[10];
  
  printf("Digite 10 letras: \n");
  for(i = 0; i < 10; i++){
    printf("Letra %d: ", i+1);
    scanf(" %c", &letras[i]);
  }

  printf("\nListagem numerada das letras:\n");
  for (i = 0; i < 10; i++) {
    printf("%d. %c\n", i + 1, letras[i]);
  }
  return 0;
}