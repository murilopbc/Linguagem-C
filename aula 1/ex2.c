#include <stdio.h>

int main() {
   
    float valor_compra, valor_parcela, valor_vista;  
     

   
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    valor_vista = valor_compra * (1 - 0.05);

    
    printf("Pagamento à vista: R$ %.2f\n", valor_vista);
    
    
    valor_parcela = valor_compra / 2;
    printf("Pagamento em 2x: R$ %.2f por parcela\n", valor_parcela);
    
    
    valor_parcela = (valor_compra * 1.02) / 3;
    printf("Pagamento em 3x: R$ %.2f por parcela\n", valor_parcela);
    
    
    valor_parcela = (valor_compra * 1.05) / 4;
    printf("Pagamento em 4x: R$ %.2f por parcela\n", valor_parcela);

}
