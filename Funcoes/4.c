#include<stdio.h>
#include<stdlib.h>

void exclamacoes(int n){
	int count;
	for(int linha=1; linha<=n; linha++){
		count = linha;
		for(int i=count; i>0; i--){
			printf("!");
		}
		printf("\n");
	}
}

int main(){
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	exclamacoes(num);
}