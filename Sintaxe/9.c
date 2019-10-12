#include <stdio.h>
/*
9. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com
desconto)
• a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
*/

int main(void){
    float valor;
    scanf("%f", &valor);

    printf("Valor com desconto:%f \n", valor-(valor*0.1));
    printf("Valor da parcela em 3x: %f \n", valor/3);
    printf("Comissão do vendedor a vista: %f \n", (valor-(valor*0.1))*0.05);
    printf("Comissão do vendedor parcelado: %f \n", valor*0.05);

    return 0;
}