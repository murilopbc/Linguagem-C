#include <stdio.h>

int main()
{
    
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    switch (idade)
    {
    
    case 5 ... 7:
        printf("\nInfantil A");
        break;
    case 8 ...10:
        printf("\nInfantil B");
        break;
    case 11 ... 13:
        printf("\nJuvenil A");
        break;
    case 14 ... 17:
        printf("\nJuvenil B");
        break;
    case 18 ... 100:
        printf("\nAdulto");
        break;
    
    default:
        printf("\nOpcao Invalida");
        break;
    }

    
        
}