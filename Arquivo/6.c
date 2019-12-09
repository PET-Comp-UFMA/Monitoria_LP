#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Crie um arquivo que armazene, a cada linha, o nome do aluno e sua nota final.

void notasAlunos(int nAlunos){
	int tam;

	char **nomes;
	int *notas;

	notas = (int*)malloc(sizeof(int)*nAlunos);
	nomes = (char**)malloc(sizeof(char*)*nAlunos);
	for(int i=0; i<nAlunos; i++){
		nomes[i] = malloc(sizeof(char)*40);
	}
	
	printf("Nome dos alunos:\n");
	for(int j=0; j<nAlunos; j++){
		scanf("%s", nomes[j]);
	}

	printf("Notas dos alunos:\n");
	for(int k=0; k<nAlunos; k++){
		scanf("%d",&notas[k]);
	}


	FILE *pont_arq;
	pont_arq = fopen("6arquivo.txt","w");

	for(int i=0; i<nAlunos; i++){

		fprintf(pont_arq, "%s", nomes[i]);

		tam = strlen(nomes[i]);

		for(int j=0; j<40-tam; j++){
			fprintf(pont_arq, " ");
		}
		fprintf(pont_arq, "%d", notas[i]);
		fprintf(pont_arq, "\n");
	}


	fclose(pont_arq);
}

int main(){
	int n;
	printf("Numero de alunos: ");
	scanf("%d",&n);
	notasAlunos(n);
}