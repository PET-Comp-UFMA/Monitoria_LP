#include <stdio.h>
#include <stdlib.h>

/*
10. Faça um programa para armazenar em memória um vetor de dados contendo 100 valores do tipo int. 
a) Faça um loop e verifique se o vetor contém realmente os 100 valores inicializados com zero 
(conte os 100 zeros do vetor). 
b) Atribua para cada elemento do vetor o valor do seu índice junto a este vetor. 
c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor. 
*/

int main(){
	int* vetor = (int*)malloc(sizeof(int)*100);
	int flag = 1;
	for(int i=0; i<100; i++){
		if(vetor[i] != 0){
			flag = 0;
			break;
		}
	}
	if(flag == 1){
		printf("Todos os elementos foram inicializados.\n");
	}

	for(int i=0; i<100; i++){
		vetor[i] = i;
	}
	for(int i=0; i<10; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	for(int i=99; i>89; i--){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	free(vetor);

	return 0;
}