#include <stdio.h>
//2. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit e em graus Kelvin. As fórmulas de conversão é: F = C∗(9.0/5.0)+32.0 e K = C + 273.15,sendo F a temperatura em Fahrenheit e K a temperatura em Kelvin

int main(){
    float c;
    printf("Digite a temperatura: ");
    scanf("%f",&c);

    float f = c *(9.0/5.0)+ 32.0;
    float k = c + 273.15;
    printf("Fahrenheit: %.2f \nKelvin: %.2f", f, k);

    return 0;
}