#include <stdio.h>

int main() {
    int continuar;
    float valorImovel, valorComissao, totalComissoes = 0.0;
    int tipoNegocio; // 1 para locação, 2 para venda
    int mesmoCorretor; // 1 se o corretor que vendeu é o mesmo que captou, 0 caso contrário

    do {
        // Solicita o tipo de negócio
        printf("Digite o tipo de negócio (1 - Locação, 2 - Venda): ");
        scanf("%d", &tipoNegocio);

        if (tipoNegocio == 1) {
            // Cálculo de comissão para locação
            float primeiroAluguel;

            printf("Digite o valor do primeiro aluguel: R$ ");
            scanf("%f", &primeiroAluguel);

            // Cálculo da comissão para locação
            float valorLiquido = primeiroAluguel * (1 - 0.14); // Desconto de 14% de imposto
            valorLiquido *= (1 - 0.10); // Desconto de 10% de taxa administrativa

            printf("O corretor que concluiu a locação é o mesmo que captou o imóvel? (1 - Sim, 0 - Não): ");
            scanf("%d", &mesmoCorretor);

            if (mesmoCorretor == 0) {
                valorLiquido *= (1 - 0.20); // Desconto adicional de 20%
            }

            valorComissao = valorLiquido; // Comissão total para locação

        } else if (tipoNegocio == 2) {
            // Cálculo de comissão para venda
            printf("Digite o valor de venda do imóvel: R$ ");
            scanf("%f", &valorImovel);

            valorComissao = valorImovel * 0.03; // Comissão de 3%

            printf("O corretor que vendeu o imóvel é o mesmo que cadastrou? (1 - Sim, 0 - Não): ");
            scanf("%d", &mesmoCorretor);

            if (mesmoCorretor == 0) {
                valorComissao *= (1 - 0.10); // Desconto de 10% se não for o mesmo corretor
            }

        } else {
            printf("Tipo de negócio inválido!\n");
            continue; // Retorna ao início do loop se o tipo for inválido
        }

        // Adiciona a comissão calculada ao total
        totalComissoes += valorComissao;

        // Exibe o valor da comissão calculada
        printf("Valor da comissão calculada: R$ %.2f\n", valorComissao);

        // Pergunta se o usuário deseja continuar
        printf("Digite 1 para continuar ou 0 para sair: ");
        scanf("%d", &continuar);

    } while (continuar == 1); // Continua enquanto o usuário digitar 1

    // Exibe o total de comissões
    printf("Total de comissões a serem pagas ao corretor: R$ %.2f\n", totalComissoes);

    return 0;
}
