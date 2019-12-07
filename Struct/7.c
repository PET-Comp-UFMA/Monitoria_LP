#include <stdio.h>

/*
7. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.
*/

typedef struct{
	char nome[20];
	int idade;
	char endereco[50];
}Pessoa;

int main(void) {
	Pessoa pessoa;
  printf("Digite o nome:\n");
	scanf("%s", pessoa.nome);
	printf("Digite a idade:\n");
	scanf("%d", &pessoa.idade);
	printf("Digite o endereco:\n");
	scanf("%s", pessoa.endereco);

	printf("Seus dados:\n");
	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Endereco: %s\n", pessoa.endereco);


  return 0;
}