#include <stdio.h>
#include <math.h>
//5.Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo é π ∗ raio^2, considere π = 3.141592.

int main(void){
    float num;
    printf("Digite o raio para calcular a área do circulo: ");

    const long double pi = 3.141592;
    scanf("%f", &num);
    float area = pow(num, 2) * pi;
    printf("num: %f", area);

    return 0;
}