#include<stdio.h>
#include<stdlib.h>

//4. Faça um programa que permita que o usuário entre com diversos nomes e telefone para cadastro, 
//e crie um arquivo com essas informações, uma por linha.


int main(){
	char nome[50];
	int num;
	char r='s';

	FILE* pont;
	pont = fopen("4arquivo.txt","w");

	while(r=='s'){
		printf("Nome: ");
		scanf("%s", nome);
		printf("Telefone: ");
		scanf("%d", &num);

		fprintf(pont, "Nome: %s;   Telefone: %d\n", nome, num);

		printf("Você deseja fazer outro cadastro?(s/n): ");
		scanf(" %c", &r);
	}
	fclose(pont);

}