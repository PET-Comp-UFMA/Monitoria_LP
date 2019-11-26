#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[20];
	int matricula;
	float nota1,nota2,media;
}Alunos;

int main(){
	int n;
	printf("Digite a quantidade de alunos:\n");
	scanf("%d",&n);
	Alunos escola[n];
	for(int i=0;i<n;i++){
		printf("Digite o nome do aluno:\n");
		scanf("%s", escola[i].nome);
		printf("Digite a matricula do aluno:\n");
		scanf("%d",&escola[i].matricula);
		printf("Digite a primeira nota do aluno:\n");
		scanf("%f", &escola[i].nota1);
		printf("Digite a segunda nota do aluno:\n");
		scanf("%f", &escola[i].nota2);
		escola[i].media = (escola[i].nota1+escola[i].nota2)/2;
	}
	for(int i=0;i<n;i++){
		printf("Nome: %s\n", escola[i].nome);
		printf("Matrícula: %d\n",escola[i].matricula);
		printf("Média: %.2f\n",escola[i].media);
	}
	return 0;
}
