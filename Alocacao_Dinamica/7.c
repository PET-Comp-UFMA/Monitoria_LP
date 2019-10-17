#include <stdio.h>
#include <stdlib.h>

//7. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
//dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido. 

int main(){
	int n;
	int* vetor;

	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &n);

	vetor = (int*)malloc(sizeof(int)*n);
	for(int i=0; i<n; i++){
		printf("%do elemento do vetor: ", i+1);
		scanf("%d", &vetor[i]);
		printf("\n");
	}
	printf("Seu vetor eh:\n");
	for(int i=0; i<n; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	free(vetor);

	return 0;
}