#include <stdio.h>

int main()
{
    
    float salario, soma;

    printf("Digite seu salario: ");
    scanf("%f", &salario);



    if ( salario >= 4000,03){

        salario * 0.14;
        printf("\nValor de contribuição do Inss: %.2f ", salario);
    }
    
    if ( salario >= 2666,68){

        salario * 0.12;
        printf("\nValor de contribuição do Inss: %.2f ", salario);
    }
    
    if ( salario >= 4000,03){

        salario * 0.09;
        printf("\nValor de contribuição do Inss: %.2f ", salario);
    }
    else {
        salario * 0.09;
        printf("\nValor de contribuição do Inss: %.2f ", salario);
    }

    
}