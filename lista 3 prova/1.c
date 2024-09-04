#include <stdio.h>

void printa(char s[20], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s);
    }
}

void main(){

    int n;
    char s[20];

    printf("Digite o valor da string: ");
    scanf("%s", &s);

    printf("Digite as vezes: ");
    scanf("%d", &n);

    printa(s, n);
}