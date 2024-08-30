#include <stdio.h>

int main()
{
    float distancia, rendimento, preco_gasolina, preco_alcool, preco_diesel;

    printf("Digite a distancia a ser percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o rendimento do veiculo (em km/l): ");
    scanf("%f", &rendimento);

    printf("Digite o preco da gasolina (por litro): ");
    scanf("%f", &preco_gasolina);

    printf("Digite o preco do alcool (por litro): ");
    scanf("%f", &preco_alcool);

    printf("Digite o preco do diesel (por litro): ");
    scanf("%f", &preco_diesel);

    
    float consumo = distancia / rendimento;

    float custo_gasolina = consumo * preco_gasolina;
    float custo_alcool = consumo * preco_alcool;
    float custo_diesel = consumo * preco_diesel;

    printf("\nCusto para percorrer %.2f km:\n", distancia);
    printf("Gasolina: R$ %.2f\n", custo_gasolina);
    printf("Alcool:   R$ %.2f\n", custo_alcool);
    printf("Diesel:   R$ %.2f\n", custo_diesel);

}
