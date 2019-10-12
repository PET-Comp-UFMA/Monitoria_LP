#include <stdio.h>
#include <stdlib.h>

/*
2. Faça um programa que leia um número N e: 
a) Crie dinamicamente e leia um vetor de inteiro de N posições; 
b) Leia um número inteiro X e conte e mostre os múltiplos desse número que existem no vetor. 
*/

int main(){
	int n, x, cont = 0;
	int* array;
	printf("Digite o numero de posicoes do vetor:\n");
	scanf("%d", &n);
	array = (int*)malloc(sizeof(int)*n);
	for(int i=0; i<n; i++){
		printf("Digite o %do elemento do vetor: ", i+1);
		scanf("%d", &array[i]);	
		printf("\n");
	}
	printf("Digite um numero X:\n");
	scanf("%d", &x);
	for(int i=0; i<n; i++){
		if(array[i]%x == 0){
			cont++;
		}
	}
	printf("Existem %d multiplos de x no vetor.\n", cont);
	for(int i=0; i<n; i++){
		if(array[i]%x == 0){
			printf("%d ", array[i]);
		}
	}
	printf("\n");
	
	free(array);

	return 0;
}