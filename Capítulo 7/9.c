/*9. Faça um programa que leia o lado de um quadrado e imprima o perímetro, a área e a diagonal. Para fazer o cálculo, implemente três funções, cada uma deve realizar um cálculo especifico conforme solicitado. Utilize as fórmulas a seguir:
perimetro = 4*lado | area = lado² | diagonal = lado*raiz2 */
  
#include <stdio.h>
#include <math.h>


float perimetro(int lado){
  return 4*lado;
}

float area(int lado){
  return lado*lado;
}

float diagonal(int lado){
  return lado*sqrt(2);
}

int main(void) {
  float lado;
  printf("Digite o lado do quadrado: ");
  scanf("%f", &lado);

  printf("\nPerímetro: %.2f\n", perimetro(lado));
  printf("Área: %.2f\n", area(lado));
  printf("Diagonal: %.2f\n", diagonal(lado));
  
  return 0;
}