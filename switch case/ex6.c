#include <stdio.h>

int main()
{
    float valor_compra, valor_parcela, valor_entrada;
    int quantidade_parcelas;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    printf("Digite o valor de entrada: ");
    scanf("%f", &valor_entrada);
    printf("Digite a quantidade de parcelas: ");
    scanf("%d", &quantidade_parcelas);

    if (valor_entrada <= 0)
    {

        switch (quantidade_parcelas)
        {
        case 2:
            valor_parcela = valor_compra * 0.617;
            break;

        case 3:
            valor_parcela = valor_compra * 0.471;
            break;

        case 4:
            valor_parcela = valor_compra * 0.395;
            break;

        case 5:
            valor_parcela = valor_compra * 0.313;
            break;

        case 6:
            valor_parcela = valor_compra * 0.274;
            break;

        default:
            printf("\nCodigo Invalido, favor Redigitar!");
            break;
        }

        printf("\nValor da parcela: %.2f\n", valor_parcela);
    }
    else
    {
        switch (quantidade_parcelas)
        {
        case 2:
            valor_parcela = (valor_compra - valor_entrada) * 0.532;
            break;

        case 3:
            valor_parcela = (valor_compra - valor_entrada) * 0.386;
            break;

        case 4:
            valor_parcela = (valor_compra - valor_entrada) * 0.31;
            break;

        case 5:
            valor_parcela = (valor_compra - valor_entrada) * 0.228;
            break;

        case 6:
            valor_parcela = (valor_compra - valor_entrada) * 0.189;
            break;

        default:
            printf("\nCodigo Invalido, favor Redigitar!");
            break;
        }

        printf("\nValor da parcela: %.2f\n", valor_parcela);
    }
}
