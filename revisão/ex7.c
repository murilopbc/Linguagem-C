#include <stdio.h>

int main() {
    char resposta;
    int contadorSim = 0;

    // Perguntas sobre o crime
    printf("Responda com 's' para Sim ou 'n' para Não.\n");

    printf("Telefonou para a vítima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') {
        contadorSim++;
    }

    printf("Esteve no local do crime? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') {
        contadorSim++;
    }

    printf("Mora perto da vítima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') {
        contadorSim++;
    }

    printf("Devia para a vítima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') {
        contadorSim++;
    }

    printf("Já trabalhou com a vítima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') {
        contadorSim++;
    }

    // Classificação final
    if (contadorSim == 2) {
        printf("Classificação: Suspeita\n");
    } else if (contadorSim == 3 || contadorSim == 4) {
        printf("Classificação: Cúmplice\n");
    } else if (contadorSim == 5) {
        printf("Classificação: Assassino\n");
    } else {
        printf("Classificação: Inocente\n");
    }

    return 0;
}
