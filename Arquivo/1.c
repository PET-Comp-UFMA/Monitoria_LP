#include<stdio.h>
#include<stdlib.h>

int main(){
	char letra;

	FILE*pont;
	pont = fopen("arq.txt","w"); //o parametro "w" cria um arquivo

	printf("Digite seu texto:\n");
	letra = getc(stdin);
	while(letra!='0'){
		fprintf(pont, "%c", letra);
		letra = getc(stdin);
	}

	fclose(pont);

//imprimindo o que foi escrito no arquivo
	pont = fopen("arq.txt","r"); //o parametro "r" abre um arquivo apenas para leitura
	char c;
	c=getc(pont);
	while(c!=EOF){
		printf("%c",c);
		c=getc(pont);
	}
	fclose(pont);

	return 0;

}