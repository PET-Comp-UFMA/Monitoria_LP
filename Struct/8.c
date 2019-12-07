#include <stdio.h>

/*
8. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.
*/

typedef struct{
	char nome[20];
	unsigned int matricula;
	char curso[20];
}Aluno;

int main(void) {
	Aluno alunos[5];
	for(int i=0; i<5; i++){
		printf("Insira os dados do %do aluno:\n", i+1);
		printf("Nome:\n");
		scanf("%s", alunos[i].nome);
		printf("Matricula:\n");
		scanf("%d", &alunos[i].matricula);
		printf("Curso:\n");
		scanf("%s", alunos[i].curso);
	}

	for(int i=0; i<5; i++){
		printf("\nDados do %do aluno:\n", i+1);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Matricula: %d\n", alunos[i].matricula);
		printf("Curso: %s\n", alunos[i].curso);
	}

  return 0;
}