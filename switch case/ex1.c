#include <stdio.h>

int main()
{
    
    int dia;

    printf("Digite um numero: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("\nDomingo");
        break;
    case 2:
        printf("\nSegunda");
        break;
    case 3:
        printf("\nTerca");
        break;
    case 4:
        printf("\nQuarta");
        break;
    case 5:
        printf("\nQuinta");
        break;
    case 6:
        printf("\nSexta");
        break;
    case 7:
        printf("\nSabado");
        break;
    
    default:
        printf("\nOpcao Invalida");
        break;
    }
        
}
