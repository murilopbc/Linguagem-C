#include <stdio.h>

int main() {
    float precoEtiqueta, valorAPagar;
    int codigoPagamento;
    char continuar;

    do {
        // Solicita o preço do produto
        printf("Digite o preço do produto: R$ ");
        scanf("%f", &precoEtiqueta);

        // Exibe as opções de pagamento
        printf("\nCondições de pagamento:\n");
        printf("1 - À vista em dinheiro ou cheque, recebe 10%% de desconto\n");
        printf("2 - À vista no cartão de crédito, recebe 5%% de desconto\n");
        printf("3 - Em duas vezes, preço normal de etiqueta sem juros\n");
        printf("4 - Em três vezes, preço normal de etiqueta mais juros de 10%%\n");
        
        // Solicita o código de pagamento
        printf("Digite o código da condição de pagamento: ");
        scanf("%d", &codigoPagamento);

        // Calcula o valor a ser pago com base na condição escolhida
        switch (codigoPagamento) {
            case 1: // À vista em dinheiro ou cheque
                valorAPagar = precoEtiqueta - (precoEtiqueta * 0.10);
                break;
            case 2: // À vista no cartão de crédito
                valorAPagar = precoEtiqueta - (precoEtiqueta * 0.05);
                break;
            case 3: // Em duas vezes
                valorAPagar = precoEtiqueta; // preço normal sem juros
                break;
            case 4: // Em três vezes
                valorAPagar = precoEtiqueta + (precoEtiqueta * 0.10); // preço normal + 10% de juros
                break;
            default:
                printf("Código de pagamento inválido!\n");
                continue; // Retorna ao início do loop se o código for inválido
        }

        // Exibe os resultados
        printf("\nPreço normal de etiqueta: R$ %.2f\n", precoEtiqueta);
        printf("Valor a ser pago: R$ %.2f\n", valorAPagar);

        // Pergunta se o usuário deseja continuar
        printf("\nDeseja realizar outra compra? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S'); // Continua enquanto o usuário digitar 's' ou 'S'

    printf("Obrigado por utilizar nosso sistema!\n");

    return 0;
}
