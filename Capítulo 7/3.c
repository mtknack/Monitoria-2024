/* 3. Faça um programa em C que leia o valor de um ângulo em graus e o converta, utilizando uma função, para radianos e ao final imprima o resultado. Veja a fórmula de cálculo a seguir. angEmRad = angEmGraus*pi/180 */
  
#include <stdio.h>

float converteGrauParaRadiano(float graus){
  return graus * 3.1415 / 180;
}

int main(void) {
  float graus, radianos;
  printf("Digite o valor do ângulo em graus: ");
  scanf("%f", &graus);
  
  radianos = converteGrauParaRadiano(graus);
  printf("\nO valor do ângulo em radianos é, aproximadamente, %.4f!", radianos);
  return 0;
}