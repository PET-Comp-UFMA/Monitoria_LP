#include <stdio.h>

/*
6. Escreva um trecho de código para fazer a criação dos novos tipos de
dados conforme solicitado abaixo:
a) Horário: composto de hora, minutos e segundos.
b) Data: composto de dia, mês e ano.
c) Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

typedef struct{
	int horas;
	int minutos;
	int segundos;
}Horario;

typedef struct{
	int dia;
	char mes[10];
	int ano;
}Data;

typedef struct{
	Data data;
	Horario horario;
	char descricao[100];
}Compromisso;

int main(void) {
  //criação de um horário
	Horario horario;
	printf("Criando um horario:\n");
	printf("Digite as horas:\n");
	scanf("%d", &horario.horas);
	printf("Digite os minutos:\n");
	scanf("%d", &horario.minutos);
	printf("Digite os segundos:\n");
	scanf("%d", &horario.segundos);

	printf("Horario criado: %d:%d:%d\n", horario.horas, horario.minutos, horario.segundos);

	//criação de uma data
	Data data;
	printf("\nCriando uma data:\n");
	printf("Digite o dia:\n");
	scanf("%d", &data.dia);
	printf("Digite o mes (string):\n");
	scanf("%s", data.mes);
	printf("Digite o ano:\n");
	scanf("%d", &data.ano);

	printf("Data criada: %d de %s de %d\n", data.dia, data.mes, data.ano);

	// criação de um compromisso utilizando os dados anteriores
	Compromisso compromisso;
	compromisso.horario = horario;
	compromisso.data = data;

	printf("\nCriando um compromisso:\n");
	printf("Digite a descricao do compromisso:\n");
	scanf("%s", compromisso.descricao);

	printf("Compromisso criado: %s\n", compromisso.descricao);
	printf("Data: %d de %s de %d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
	printf("Horario: %d:%d:%d\n", compromisso.horario.horas, compromisso.horario.minutos, compromisso.horario.segundos);

  return 0;
}