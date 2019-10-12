#include <stdio.h>
//4.Lei um número e imprima os seus dois antecessores e os seus cinco sucessores.

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("antecessores: %d, %d \n", num-2, num-1);
    printf("sucessores: %d, %d, %d, %d, %d", num+1, num+2, num+3, num+4, num+5);

    return 0;
}