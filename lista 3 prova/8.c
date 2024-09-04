#include <stdio.h>
#define max 3

int PAR(int n)
{
    if(n % 2 == 0){
        return 0;
    } 
    return 1;
}

void main()
{

    int n;

    printf("Digite os valor de n: \n");
    scanf("%d", &n);
    
    printf("retorno da funcao eh:  %d", PAR(n));

}