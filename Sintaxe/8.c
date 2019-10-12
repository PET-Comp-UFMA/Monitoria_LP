#include <stdio.h>
//8. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.

int main(void){
    int dias;
    float imposto, liquido, bruto;
    printf("Digite o numero de dias: ");
    scanf("%d", &dias);

    bruto = 30*dias;
    imposto = bruto*0.08;
    liquido = bruto - imposto;
    printf("Líquido: %.2f",liquido);
    
    return 0;
}