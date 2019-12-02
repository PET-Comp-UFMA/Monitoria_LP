#include<stdio.h>
#include<stdlib.h>

//2. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse arquivo possui. 

int main(){
	int count=0;
	char c;

	FILE* pont_arq;
	pont_arq = fopen("2arquivo.txt","r");// o parametro "r" abre um arquivo apenas para leitura. 

//testando se o arquivo existe ou não
	if(pont_arq == NULL){
  		printf("Arquivo nao existente!");
  		return 1;
  	}

	c = getc(pont_arq);
	while(c!=EOF){
		c = getc(pont_arq);
		if(c == '\n'){
			count++;
		}
	}

	fclose(pont_arq);
	printf("%d\n", count);
}