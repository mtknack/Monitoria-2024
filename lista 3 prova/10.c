#include <stdio.h>
#include <math.h>

int maior(int x, int y){
    if(x % y == 0){
        return 1;
    }

    return 0;
}

int main(){

    int x, y;
    printf("Digite x e y: \n");
    scanf("%d %d", &x, &y);

    printf("valor da funcao: %d", maior(x, y));
}