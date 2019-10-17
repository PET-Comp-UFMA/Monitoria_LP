#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[100],sexo[50];
	int idade;
	printf("Digite seu nome:\n");
	scanf("%[^\n]",nome);
	printf("Digite seu sexo:\n");
	scanf("%s",sexo);
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	if(!strcmp(sexo,"feminino") && idade<25){
		printf("%s\n",nome);
		printf("ACEITA");
	}else{
		printf("%s\n",nome);
		printf("NAO ACEITA");
	}
}
