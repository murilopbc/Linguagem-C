#include <stdio.h>

int main()
{
    
    int codigo_produto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo_produto);

    switch (codigo_produto)
    {
    
    case 1:
        printf("\nAlimento nao perecivel");
        break;
    case 2 ...4:
        printf("\nAlimento perecivel");
        break;
    case 5 ... 6:
        printf("\nVestuario");
        break;
    case 7:
        printf("\nHigiene Pessoal");
        break;
    case 8 ... 15:
        printf("\nLimpeza e Utensilios Domesticos");
        break;
    
    default:
        printf("\nOpcao Invalida");
        break;
    }

    
        
}
