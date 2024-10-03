#include <stdio.h>
#include <math.h> // Para a função sqrt()

int main() {
    float a, b, c;
    float delta, raiz1, raiz2;

    // Solicita os valores de a, b e c
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    // Verifica se é uma equação do segundo grau
    if (a == 0) {
        printf("O valor de a é zero, portanto, não é uma equação do segundo grau.\n");
        return 0;  // Encerra o programa
    }

    // Solicita os valores de b e c
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Calcula o delta
    delta = (b * b) - (4 * a * c);

    // Verifica o valor de delta e determina o número de raízes reais
    if (delta < 0) {
        printf("A equação não possui raízes reais, pois o delta é negativo.\n");
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);  // Calcula a única raiz
        printf("A equação possui uma raiz real: %.2f\n", raiz1);
    } else {
        // Delta positivo, duas raízes reais
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais:\n");
        printf("Raiz 1: %.2f\n", raiz1);
        printf("Raiz 2: %.2f\n", raiz2);
    }

    return 0;
}
