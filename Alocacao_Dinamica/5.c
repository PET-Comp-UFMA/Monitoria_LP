#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
5. Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor 
de double, depois use a função MALLOC para reservar (alocar) o espaço de memória de acordo 
com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10 elementos. 
Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor 
valores aleatórios (usando a função rand) entre 0 e 100. Exiba na tela os valores armazenados
nos 10 primeiros elementos do vetor. 
*/

double geraRand(double min, double max){
	double intervalo = max-min;
	double div = RAND_MAX/intervalo;
	return min + (rand()/div);
}


int main(){
	srand(time(NULL));
	int n;
	double* vetor;

	printf("Quantos valores vc deseja armazenar no vetor?\n");
	scanf("%d", &n);
	if(n < 10){
		printf("Tamanho do vetor nao suficiente.");
	}else{
		vetor = (double*)malloc(sizeof(double)*n);
		for(int i=0; i<n; i++){
			vetor[i] = geraRand(0,100);
		}
		printf("Os 10 primeiros valores gerados foram:\n");
		for(int i=0; i<10; i++){
			printf("%.2lf ", vetor[i]);
		}
		free(vetor);
	}

	printf("\n");

	return 0;
}