/* 3. Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles, considere a mesma fórmula do exercício anterior. */

#include <stdio.h>
#include <math.h>

struct ponto {
float x;
float y;
};

int main(void) {
  struct ponto pA, pB;
  float resultado;
  printf("Digite as coordenadas do primeiro ponto (x y): ");
  scanf("%f %f", &pA.x, &pA.y);
  
  printf("Digite as coordenadas do segundo ponto (x y): ");
  scanf("%f %f", &pB.x, &pB.y);

  resultado = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));
  printf("Distancia entre os pontos A e B: %.2f \n", resultado);
  return 0;
}