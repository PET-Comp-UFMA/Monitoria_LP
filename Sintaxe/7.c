#include <stdio.h>
/*
7. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
• O primeiro ganhador receberá 46%;
• O segundo receberá 32%;
• O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

int main(void){
    float valor = 780000;
    float ganhador1 = valor*0.46;
    float ganhador2 = valor*0.32;
    float ganhador3 = valor - ganhador1 - ganhador2;

    printf("Ganhador 1: %.2f \nGanhador 2: %.2f \nGanhador 3: %.2f ", ganhador1, ganhador2, ganhador3);

    return 0;
}