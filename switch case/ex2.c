#include <stdio.h>

int main()
{
    float valor_produto, valor_atual_produto;
    int reajuste;

    printf("Digite o preco do produto: ");
    scanf("%f", &valor_produto);
    printf("Digite de quanto sera o reajuste de preco do produto: \n1-15 por cento\n2-20 por cento\n3-30 por cento\n");
    scanf("%d", &reajuste);


    switch (reajuste)
    {
    
    case 1:
        valor_atual_produto = valor_produto * 1.15;
        break;
    case 2:
        valor_atual_produto = valor_produto * 1.20;
        break;
        
    case 3:
        valor_atual_produto = valor_produto * 1.30;
        break;

    
    default:
        printf("\nOpcao Invalida");
        break;
    }

    printf("\nValor do produto apos reajuste: %.2f\n", valor_atual_produto);
        
}
