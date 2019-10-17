#include <stdio.h>
#include <stdlib.h>

//4. Faça um programa que leia uma quantidade qualquer de números armazenando-os na memória
//e pare a leitura quando o usuário entrar um número negativo. Em seguida, imprima o vetor lido. 

int main(){
	int* numeros = NULL, *extra = NULL;
	int n, cont = 0;

	do{
		printf("Digite o numero que voce gostaria de colocar no vetor:\n");
		scanf("%d", &n);
		if(n >= 0){
			cont++;
			extra = (int*)realloc(numeros, sizeof(int)*cont);
			if(extra != NULL){
				numeros = extra;
				numeros[cont-1] = n;
			}else{
				printf("Erro na alocacao do vetor.\n");
				free(numeros);
			}
		}
		
	}while(n >= 0);

	printf("Seu vetor eh:\n");
	for(int i=0; i<cont; i++){
		printf("%d ", numeros[i]);
	}
	printf("\n");
	free(numeros);
	free(extra);

	return 0;
}