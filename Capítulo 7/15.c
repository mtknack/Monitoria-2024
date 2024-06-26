/* 15. Construa um programa em C que leia um caractere (letra) e, por meio de uma função, retorne se este caractere é uma consoante ou uma vogal. Ao final imprima o resultado. */
  
#include <stdio.h>

int verificaVogal(char letra){
  switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      return 1;
      break;
    default:
    return 0;
  }
}

int main(void) {
  char letra;

  printf("Digite o caracter para verificar se é vogal ou consoante: ");
  scanf("%c", &letra);

  if(verificaVogal(letra) == 1){
    printf("\nÉ vogal!");
  } else{
    printf("\nÉ consoante!");
  }
  
  return 0;
}