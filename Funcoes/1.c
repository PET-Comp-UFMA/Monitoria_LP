#include<stdio.h>
#include<stdlib.h>

int dobro(int n){
	int res;
	res = n*2;
	return res;
}

int main(){
	int num;
	int resposta;
	printf("Digite um número: ");
	scanf("%d",&num);

	resposta = dobro(num);

	printf("%d\n",resposta);
}