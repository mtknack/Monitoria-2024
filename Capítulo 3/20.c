/* 20. Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
  • Qual o seu time de coração?
  1-Fluminense;
  2-Botafogo;
  3-Vasco;
  4-Flamengo;
  5-Outros
  • Onde você mora?
  1-RJ;
  2-Niterói;
  3-Outros
  • Qual o seu salário?
  Faça um programa que imprima:
  • o número de torcedores por clube;
  • a média salarial dos torcedores do Botafogo;
  • o número de pessoas moradoras do Rio de Janeiro, torcedores de outros
  clubes;
  • o número de pessoas de Niterói torcedoras do Fluminense 
  OBS: O programa encerra quando se digita 0 para o time.*/

#include <stdio.h>

int main(void) {
  int time, cidade, fluminense = 0, botafogo = 0, vasco = 0, flamengo = 0, outrosTimes = 0, moradorRjOutros = 0, moradorNiteroiFluminense = 0;
  float salario, salarioTotalBotafoguenses = 0, salarioMedioBotafoguenses = 0;

  do {
    printf("# Qual o seu time de coração?\n 1-Fluminense\n 2-Botafogo\n 3-Vasco\n 4-Flamengo\n 5-Outros\n");
    scanf( "%d", &time);
    if (time == 0) {
      break;
    }
    printf("# Onde você mora?\n1-RJ\n2-Niterói\n3-Outros\n");
    scanf( "%d", &cidade);
    printf("# Qual o seu salário?\n");
    scanf( "%f", &salario);
    if (time == 1) {
      fluminense++;
      if(cidade == 2) {
        moradorNiteroiFluminense++;
      }
    } else if (time == 2) {
      botafogo++;
      salarioTotalBotafoguenses += salario;
    } else if (time == 3) {
      vasco++;
    } else if (time == 4) {
      flamengo++;
    } else if (time == 5) {
      outrosTimes++;
      if(cidade == 1) {
        moradorRjOutros++;
      }
    } else {
      printf("Número inválido!\n");
    }
    puts("");
  } while (1);

  // Calculo Salario médio botafogo
  salarioMedioBotafoguenses = salarioTotalBotafoguenses / botafogo;
  
  printf("Fim da coleta de dados....\n\n");
  printf("-> Número de torcedores por clube:\n-Fluminense: %d\n-Botafogo: %d\n-Vasco: %d\n-Flamengo: %d\n-Outros: %d\n", fluminense, botafogo, vasco, flamengo, outrosTimes);
  printf("-> Média salarial dos torcedores do Botafogo: %.2f\n", salarioMedioBotafoguenses);
  printf("-> Número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes: %d\n", moradorRjOutros);
  printf("-> Número de pessoas de Niterói torcedoras do Fluminense: %d\n", moradorNiteroiFluminense);
  return 0;
}