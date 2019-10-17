#include <stdio.h>
#include <stdlib.h>
/*
6. Faça um programa que leia números do teclado e os armazene em um vetor alocado dinamicamente.
O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão 
digitados um a um e, sendo que caso ele deseje encerrar a entrada de dados, ele irá digitar o 
número ZERO. Os dados devem ser armazenados na memória deste modo. 
a) Inicie com um vetor de tamanho 10 alocado dinamicamente; 
b) Após, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do vetor anterior 
adicionado espaço para mais 10 valores (tamanho N+10, onde N inicia com 10); 
c) Copie os valores já digitados da área inicial para esta área maior e libere a memória da área
inicial; 
d) Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada 
vez que o mesmo estiver cheio. Assim o vetor irá ser ’expandido’ de 10 em 10 valores. 

Ao final, exiba o vetor lido. 
*/

int main(){
	int* aux;
	int* final;
	int n, cont = 0, flag = 1;
	final = (int*)malloc(sizeof(int)*10);

	while(flag != 0){
		printf("Digite um numero qualquer pra colocar no vetor. Digite '0' para parar.\n");
		scanf("%d", &n);
		cont++;

		if(n == 0){
			flag = 0;
			break;
		}else if(cont%10 == 0){
			aux = (int*)malloc(sizeof(int)*(cont+10));
			for(int i=0; i<cont; i++){
				aux[i] = final[i];
			}
			free(final);
			final = aux;
			final[cont-1] = n;
		}else{
			final[cont-1] = n;
		}
	}
	printf("Seu vetor eh:\n");
	for (int i=0; i<cont-1; i++){
		printf("%d ", final[i]);
	}
	printf("\n");
	free(final);

	return 0;
}