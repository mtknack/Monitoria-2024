/* 12. Faça um programa que leia os catetos (dois catetos) de um triângulo retângulo e imprima a hipotenusa. Para fazer o cálculo, implemente uma função. Utilize a fórmula a seguir: hipotenusa = raiz quadrada de (cateto1² + cateto2²) */

#include <stdio.h>
#include <math.h>

float hipotenusa(float cateto1, float cateto2){
  return sqrt(cateto1*cateto1 + cateto2*cateto2);
}

int main(void) {
  float cateto1, cateto2;
  printf("Digite o valor do primeiro cateto: ");
  scanf("%f", &cateto1);
  printf("Digite o valor do segundo cateto: ");
  scanf("%f", &cateto2);

  printf("\nO valor da hipotenusa é de %.2f!", hipotenusa(cateto1,cateto2));
  return 0;
}