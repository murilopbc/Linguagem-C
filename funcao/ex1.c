#include <stdio.h>

int media(int n1, int n2, int n3, char letra)
{
    int media = 0;
    int ponderada = 0;

    if (letra == 'A')
    {
        media = (n1 + n2 + n3) / 3;
        return media;
    }
    else if (letra == 'P')
    {
        ponderada = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
        return ponderada;
    }
}

int main()
{
    int a, b, c;
    char tipo;

    printf("Digite uma nota a: ");
    scanf("%d", &a);

    printf("Digite uma nota b: ");
    scanf("%d", &b);

    printf("Digite uma nota c: ");
    scanf("%d", &c);

    printf("Digite 'A' para calcular média aritmetica ou 'P' para ponderada: ");
    tipo = getch();

    int resultado = media(a, b, c, tipo);
    printf(" Resultado é: %d", resultado);
}
