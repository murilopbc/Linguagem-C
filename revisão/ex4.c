#include <stdio.h>

int main() {
    int valor, soma = 0, contador = 0;
    float media;

    // Solicita os valores positivos do usuário
    printf("Digite valores positivos (um valor negativo encerra a entrada):\n");

    while (1) {
        scanf("%d", &valor);

        // Verifica se o valor é negativo para encerrar o loop
        if (valor < 0) {
            break;
        }

        // Acumula os valores positivos
        soma += valor;
        contador++;
    }

    // Verifica se houve entrada de valores para evitar divisão por zero
    if (contador > 0) {
        media = (float) soma / contador;  // Calcula a média
        printf("A média dos valores inseridos é: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }

    return 0;
}
