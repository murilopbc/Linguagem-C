#include <stdio.h>

int main()
{
    float valor_compra, valor_parcela;
    int quantidade_parcelas;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    printf("Digite a quantidade de parcelas: ");
    scanf("%d", &quantidade_parcelas);


    switch (quantidade_parcelas)
    {
    case 2:
        valor_parcela = valor_compra * 0.532;
        break;
        
    case 3:
        valor_parcela = valor_compra * 0.386;
        break;
    
    case 4:
        valor_parcela = valor_compra * 0.311;
        break;
        
    case 5:
        valor_parcela = valor_compra * 0.228;
        break;
       
    case 6:
       valor_parcela = valor_compra * 0.189;
       break;
    
    default:
        printf("\nOpcao Invalida");
        break;
    }

    printf("\nValor da parcela: %.2f\n", valor_parcela);
        
}
