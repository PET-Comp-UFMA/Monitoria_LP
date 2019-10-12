#include <stdio.h>
//3. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

int main(){
    int num;
    printf("Digite um valor: ");
    scanf("%d", &num);

    int suc_triplo = num * 3 + 1;
    int ant_dobro = num * 2 - 1;
    printf("%d", suc_triplo + ant_dobro);

    return 0;
}
