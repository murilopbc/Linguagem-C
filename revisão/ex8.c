#include <stdio.h>

int main() {
    int tipoCarne;
    float quantidade, precoKg = 0, precoTotal, desconto = 0, valorFinal;
    char pagamento;

    // Loop para selecionar o tipo de carne
    while (1) {
        printf("Bem-vindo ao Hipermercado Tabajara!\n");
        printf("Selecione o tipo de carne:\n");
        printf("1 - File Duplo\n");
        printf("2 - Alcatra\n");
        printf("3 - Picanha\n");
        printf("Digite o número correspondente ao tipo de carne: ");
        scanf("%d", &tipoCarne);

        if (tipoCarne >= 1 && tipoCarne <= 3) {
            break;  // Sai do loop se uma opção válida for escolhida
        } else {
            printf("Opção inválida! Por favor, escolha uma carne válida.\n");
        }
    }

    // Solicita a quantidade de carne
    printf("Digite a quantidade (em Kg) de carne comprada: ");
    scanf("%f", &quantidade);

    // Determina o preço por Kg com base no tipo de carne e quantidade
    switch (tipoCarne) {
        case 1: // Filé Duplo
            if (quantidade <= 5) {
                precoKg = 44.90;
            } else {
                precoKg = 45.80;
            }
            printf("Carne: Filé Duplo\n");
            break;
        case 2: // Alcatra
            if (quantidade <= 5) {
                precoKg = 55.90;
            } else {
                precoKg = 56.80;
            }
            printf("Carne: Alcatra\n");
            break;
        case 3: // Picanha
            if (quantidade <= 5) {
                precoKg = 66.90;
            } else {
                precoKg = 67.80;
            }
            printf("Carne: Picanha\n");
            break;
    }

    // Calcula o preço total sem desconto
    precoTotal = quantidade * precoKg;

    // Pergunta se o pagamento será com cartão Tabajara
    printf("O pagamento será feito com o cartão Tabajara? (s/n): ");
    scanf(" %c", &pagamento);

    // Aplica o desconto de 5% se o pagamento for com cartão Tabajara
    if (pagamento == 's' || pagamento == 'S') {
        desconto = precoTotal * 0.05;
    }

    // Calcula o valor final
    valorFinal = precoTotal - desconto;

    // Exibe o cupom fiscal
    printf("\n--- Cupom Fiscal ---\n");
    printf("Quantidade de carne: %.2f Kg\n", quantidade);
    printf("Preço por Kg: R$ %.2f\n", precoKg);
    printf("Preço total: R$ %.2f\n", precoTotal);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
