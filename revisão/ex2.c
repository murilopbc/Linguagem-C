#include <stdio.h>

int main() {
    int velocidade_maxima, velocidade_motorista, diferenca, multa;

    // Solicita a velocidade máxima da avenida
    printf("Digite a velocidade máxima permitida na avenida (km/h): ");
    scanf("%d", &velocidade_maxima);

    // Solicita a velocidade com que o motorista estava dirigindo
    printf("Digite a velocidade do motorista (km/h): ");
    scanf("%d", &velocidade_motorista);

    // Calcula a diferença de velocidade
    diferenca = velocidade_motorista - velocidade_maxima;

    // Verifica se há multa
    if (diferenca > 0) {
        multa = diferenca * 5;  // Multa de R$ 5,00 por km/h acima do limite
        printf("O motorista estava acima da velocidade permitida.\n");
        printf("A multa é de: R$ %d,00\n", multa);
    } else {
        printf("O motorista está dentro do limite de velocidade. Não há multa.\n");
    }

    return 0;
}
