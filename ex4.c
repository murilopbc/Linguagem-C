#include <stdio.h>

int main()
{
    
    float num1,num2, soma;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    
    printf("Digite um outro numero: ");
    scanf("%f", &num2);


    soma = num1 + num2;


    if ( soma >= 10)

    {
        soma += 5;
        printf("\nValor de soma + 5: %.2f ", soma);
       

    }
    else {
       
        soma -= 7;
        printf("\nValor da soma - 7: %.2f ", soma);  

    }
}