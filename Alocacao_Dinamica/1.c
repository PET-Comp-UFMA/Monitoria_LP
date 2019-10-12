#include <stdio.h>
#include <stdlib.h>

/*
1. Crie um programa que: 
a) Aloque dinamicamente um array de 5 números inteiros. 
b) Peça para o usuário digitar os 5 números no espaço alocado. 
c) Mostre na tela os 5 números. 
d) Libere a memória alocada. 
*/

int main(){
	int* array = (int*)malloc(sizeof(int)*5);
	for(int i=0; i<5; i++){
		printf("Digite o %do numero do array: ", i+1);
		scanf("%d", &array[i]);
		printf("\n");

	}
	printf("Os numeros dentro do array sao:\n");
	for(int i=0; i<5; i++){
		printf("%d \n", array[i]);
	}
	printf("\n");

	free(array);
	return 0;
}