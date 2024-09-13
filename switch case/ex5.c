#include <stdio.h>

int main()
{
    float valor_produto, valor_atual_produto;
    int reajuste;

    printf("Digite o preco do produto: ");
    scanf("%f", &valor_produto);
    printf("Digite de qual sera a forma de pagamento: \n");
    scanf("%d", &reajuste);


    switch (reajuste)
    {
    
    case 1:
        valor_atual_produto = valor_produto * 0.9;
        break;
    case 2:
        valor_atual_produto = valor_produto * 0.95;
        break;
        
    case 3:
        valor_atual_produto = valor_produto * 1;
        break;
    case 4:
        valor_atual_produto = valor_produto * 1.1;
        break;

    
    default:
        printf("\nOpcao Invalida");
        break;
    }

    printf("\nValor do produto apos reajuste: %.2f\n", valor_atual_produto);
        
}
