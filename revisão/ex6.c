#include <stdio.h>

int main() {
    int numero, centenas, dezenas, unidades;

    while (1) {
        // Solicita um número ao usuário
        printf("Digite um número inteiro menor que 1000 (0 para sair): ");
        scanf("%d", &numero);

        // Verifica se o usuário deseja encerrar o programa
        if (numero == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Verifica se o número é maior que 1000
        if (numero >= 1000) {
            printf("Valor inválido! Digite um número menor que 1000.\n");
            continue; // Volta ao início do loop para pedir um novo número
        }

        // Calcula centenas, dezenas e unidades
        centenas = numero / 100;
        dezenas = (numero % 100) / 10;
        unidades = numero % 10;

        // Exibe o resultado
        printf("%d = ", numero);
        if (centenas > 0) {
            printf("%d centena%s", centenas, centenas > 1 ? "s" : "");
            if (dezenas > 0 || unidades > 0) {
                printf(", ");
            }
        }
        if (dezenas > 0) {
            printf("%d dezena%s", dezenas, dezenas > 1 ? "s" : "");
            if (unidades > 0) {
                printf(" e ");
            }
        }
        if (unidades > 0) {
            printf("%d unidade%s", unidades, unidades > 1 ? "s" : "");
        }
        printf(".\n");
    }

    return 0;
}
