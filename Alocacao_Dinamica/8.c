#include <stdio.h>
#include <stdlib.h>

/*
8. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça 
a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre
quantos dos números são pares e quantos são ímpares. 
*/

int main(){
	int* vetor;
	int n, pares = 0, impares =0;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	vetor = (int*)malloc(sizeof(int)*n);

	for(int i=0; i<n; i++){
		printf("%do elemento: ", i+1);
		scanf("%d", &vetor[i]);
		if(vetor[i] % 2 == 0){
			pares++;
		}else{
			impares++;
		}
	}
	printf("Numeros pares no vetor: %d\nNumeros impares no vetor: %d\n", pares, impares);
	free(vetor);
	return 0;
}
