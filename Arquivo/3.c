#include<stdio.h>
#include<stdlib.h>

// 3. Faça um programa que receba do usuário um arquivo texto criado por você. 
// Crie outro arquivo texto contendo o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’. 

void copiaArq(FILE *pontA){
	char c;

	FILE *pontB;
	pontB = fopen("3arquivoB.txt","w"); //criando um arquivo B onde ficará a copia do arquivo A

	//testando se o arqivo foi aberto
	if(pontB == NULL){
  		printf("Falha ao abrir o arquivo!");
  		return 1;
  	}

//lendo o arquivo A caractere por caractere
	c = getc(pontA);
	while(c!=EOF){
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
			fprintf(pontB, "*");
		}else{
			fprintf(pontB, "%c", c);
		}
		c = getc(pontA);
	}

	fclose(pontA);
	fclose(pontB);
}

int main(){
	char c;

	FILE *pontA;
	pontA = fopen("3arquivoA.txt","r"); //abrindo o arquivo A existente

	//testando se o arquivo existe ou não
	if(pont_arq == NULL){
  		printf("Arquivo nao existente!");
  		return 1;
  	}

	copiaArq(pontA);

}