/* 12. Astolfolov Oliveirescu é técnico de um time da série C do poderoso campeonato de futebol profissional da Albânia. Ele deseja manter os dados dos seus jogadores guardados de forma minuciosa. Ajude-o fazendo um programa para armazenar os seguintes dados de cada jogador: nº da camisa, peso (kg), altura (m) e a posição em que joga (atacante, defensor ou meio campista). Lembre-se que o time tem 22 jogadores, entre reservas e titulares. Leia os dados e depois gere um relatório no vídeo, devidamente tabulado/formatado. */ 

#include <stdio.h>

#define numJogadores 2

typedef struct {
    int numeroCamisa;
    float peso;
    float altura;
    char posicao[20];
} Jogador;

int main(void) {
  Jogador jogadores[numJogadores];
  for (int i = 0; i < numJogadores; i++) {
      printf("Jogador %d:\n", i + 1);
      printf("Número da camisa: ");
      scanf("%d", &jogadores[i].numeroCamisa);
      printf("Peso (kg): ");
      scanf("%f", &jogadores[i].peso);
      printf("Altura (m): ");
      scanf("%f", &jogadores[i].altura);
      printf("Posição: ");
      scanf("%s", jogadores[i].posicao);
      printf("\n");
  }

  printf("%-13s%-13s%-13s%-13s\n", "Número", "Peso (kg)", "Altura (m)", "Posição");
  printf("--------------------------------------------------------\n");
  for (int i = 0; i < numJogadores; i++) {
      printf("%-13d%-13.2f%-13.2f%-13s\n",
             jogadores[i].numeroCamisa,
             jogadores[i].peso,
             jogadores[i].altura,
             jogadores[i].posicao);
  }
  return 0;
}