/* 2. Faça um programa que imprima todos os números pares de 100 até 1. */

#include <stdio.h>

int main(void) {
  for(int i = 100; i > 0; i--){
    if(i % 2 == 0){
      printf("%d\n", i);
    }
  }
  return 0;
}
