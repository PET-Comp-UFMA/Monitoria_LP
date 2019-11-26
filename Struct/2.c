#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[20];
	float altura,peso;
	long int cpf;
	char sexo[10];
}Pessoas;

int main(){
	int n;
	float imc;
	long int search;
	printf("Quantas pessoas você quer cadastrar?\n");
	scanf("%d",&n);
	Pessoas dados[n];
	for(int i=0;i<n;i++){
		printf("Digite o nome da pessoa:\n");
		scanf("%s",dados[i].nome);
		printf("Digite a altura da pessoa:\n");
		scanf("%f",&dados[i].altura);
		printf("Digite o peso da pessoa:\n");
		scanf("%f",&dados[i].peso);
		printf("Digite o cpf:\n");
		scanf("%ld",&dados[i].cpf);
		printf("Digite o seu sexo:(f/m)\n");
		scanf("%s",dados[i].sexo);
	}
	printf("Digite o cpf de quem você deseja procurar:\n");
	scanf("%ld",&search);
	for(int i=0; i<n;i++){
		if(search == dados[i].cpf){
			imc = (dados[i].peso/(dados[i].altura*dados[i].altura));
			break;
		}
	}
	printf("O imc é %.1f",imc);

	return 0;
}
