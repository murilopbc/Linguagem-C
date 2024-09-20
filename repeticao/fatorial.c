#include <stdio.h>

int main()
{   

    int num, i, fatorial;


    printf("Digite um numero: ");
    scanf("%d", &num);

    fatorial = num;

    i = num - 1;

    while (i > 0)
    {   
        fatorial = fatorial * i;
        i--;
        
    }  
    printf("\nResultado: %d ", fatorial); 
}
