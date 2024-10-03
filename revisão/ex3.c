#include <stdio.h>

int main() {
    int valor, cedulas100, cedulas50, cedulas20, cedulas10, cedulas5, cedulas2, cedulas1;

    // Solicita o valor em reais (sem centavos)
    printf("Digite o valor em Reais: ");
    scanf("%d", &valor);

    // Calcula a quantidade de cédulas de 100
    cedulas100 = valor / 100;
    valor = valor % 100;

    // Calcula a quantidade de cédulas de 50
    cedulas50 = valor / 50;
    valor = valor % 50;

    // Calcula a quantidade de cédulas de 20
    cedulas20 = valor / 20;
    valor = valor % 20;

    // Calcula a quantidade de cédulas de 10
    cedulas10 = valor / 10;
    valor = valor % 10;

    // Calcula a quantidade de cédulas de 5
    cedulas5 = valor / 5;
    valor = valor % 5;

    // Calcula a quantidade de cédulas de 2
    cedulas2 = valor / 2;
    valor = valor % 2;

    // O valor restante é a quantidade de cédulas de 1
    cedulas1 = valor;

    // Exibe o resultado
    printf("A quantidade mínima de cédulas para o valor informado é:\n");
    if (cedulas100 > 0) printf("%d cédulas de 100\n", cedulas100);
    if (cedulas50 > 0) printf("%d cédulas de 50\n", cedulas50);
    if (cedulas20 > 0) printf("%d cédulas de 20\n", cedulas20);
    if (cedulas10 > 0) printf("%d cédulas de 10\n", cedulas10);
    if (cedulas5 > 0) printf("%d cédulas de 5\n", cedulas5);
    if (cedulas2 > 0) printf("%d cédulas de 2\n", cedulas2);
    if (cedulas1 > 0) printf("%d cédulas de 1\n", cedulas1);

    return 0;
}
