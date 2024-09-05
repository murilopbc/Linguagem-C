#include <stdio.h>

int main()
{
    
    int a,b, x;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    
    printf("Digite o valor de B: ");
    scanf("%d", &b);


    if (a < b)

    {
        printf("Valor de A: %d ", a);
        printf("Valor de B: %d ", b);

    }
    else {
        
        x = a;
        a = b;
        b = x;

        printf("Valor de a: %d ", a);
        printf("Valor de b: %d ", b);

    }
}