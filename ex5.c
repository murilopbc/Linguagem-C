#include <stdio.h>

int main()
{
    float salario, inss;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    
    if (salario >= 4000.03 && salario <= 7786.02) {
        inss = (salario * 0.14) + 181.18;
    } else if (salario >= 2666.68) {
        inss = (salario * 0.12) + 101.18;
    } else if (salario >= 1412) {
        inss = (salario * 0.09) + 21.18;
    } else {
        inss = salario * 0.075;
    }

    printf("\nValor de contribuicao do INSS: %.2f\n", inss);
}
