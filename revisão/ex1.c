#include <stdio.h>

int main() {
    int opcao;
    float base, altura, lado, baseMaior, baseMenor, raio;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's') {
        // Exibe o menu de opções
        printf("Escolha a figura para calcular a área:\n");
        printf("1 – Quadrado\n");
        printf("2 – Triângulo\n");
        printf("3 – Trapézio\n");
        printf("4 – Retângulo\n");
        printf("5 – Esfera\n");
        printf("6 – Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Quadrado
                printf("Digite o lado do quadrado: ");
                scanf("%f", &lado);
                printf("A área do quadrado é: %.2f\n", lado * lado);
                break;
            
            case 2: // Triângulo
                printf("Digite a base do triângulo: ");
                scanf("%f", &base);
                printf("Digite a altura do triângulo: ");
                scanf("%f", &altura);
                printf("A área do triângulo é: %.2f\n", (base * altura) / 2);
                break;
            
            case 3: // Trapézio
                printf("Digite a base maior do trapézio: ");
                scanf("%f", &baseMaior);
                printf("Digite a base menor do trapézio: ");
                scanf("%f", &baseMenor);
                printf("Digite a altura do trapézio: ");
                scanf("%f", &altura);
                printf("A área do trapézio é: %.2f\n", ((baseMaior + baseMenor) * altura) / 2);
                break;
            
            case 4: // Retângulo
                printf("Digite a base do retângulo: ");
                scanf("%f", &base);
                printf("Digite a altura do retângulo: ");
                scanf("%f", &altura);
                printf("A área do retângulo é: %.2f\n", base * altura);
                break;

            case 5: // Esfera
                printf("Digite o raio da esfera: ");
                scanf("%f", &raio);
                printf("A área da esfera é: %.2f\n", 4 * 3.14159 * raio * raio);
                break;

            case 6: // Sair
                printf("Agora você está mais preparado para a prova!\n");
                return 0;
            
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

        // Pergunta se deseja continuar
        printf("Deseja continuar (S/N)? ");
        scanf(" %c", &continuar);
    }

    printf("Agora você está mais preparado para a prova!\n");
    return 0;
}
