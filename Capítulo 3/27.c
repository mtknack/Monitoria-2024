#include <stdio.h>
#include <stdlib.h>

void main(){

    int matricula, disciplinas, i;
    float cr, maior = 0, nota, notas;
    do
    {
        notas = 0;
        printf("Digite a matricula: ");
        scanf("%d", &matricula);
        if (matricula < 1 || matricula > 5000)
            break;

        printf("Digite a quantidade de disciplinas cursadas: ");
        scanf("%d", &disciplinas);
        i = 1;
        while (i <= disciplinas)
        {
            printf("Digite a nota da disciplina %d: ", i);
            scanf("%f", &nota);
            notas += nota;
            i++;
        }
        cr = notas / disciplinas;
        printf("\n---Matricula: %d", matricula);
        printf("\n---Numero de disciplinas: %d", disciplinas);
        printf("\n---CR: %f", cr);
        printf("\n\n");

        if (disciplinas > 4 && cr > maior){
            maior = cr;
        }

    } while (matricula > 0 && matricula <= 5000);

    printf("\nMaior CR dos alunos: %f", maior);
}