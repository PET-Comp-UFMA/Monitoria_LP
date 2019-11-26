#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*5. Escreva um programa que simule contas bancárias, com as seguintes especificações:
a) Ao iniciar o programa vamos criar contas bancárias para três clientes.
b) Cada conta terá o nome e o CPF do cliente associado a ela.
c) No ato da criação da conta o cliente precisará fazer um depósito inicial.
d) Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas.
e) Sempre que uma operação de saque ou depósito seja realizada, o sistema deverá imprimir o nome do titular e o saldo final da conta.
*/

typedef struct{
	char nome[20];
	long int cpf;
	float valor;
}Conta;

int main(){
	int flag=1,opc;
	long int search;
	Conta aux;
	Conta banco[3];
	for(int i=0;i<3;i++){
		printf("Digite o nome do titular:\n");
		scanf("%s",banco[i].nome);
		printf("Digite o cpf do titular:\n");
		scanf("%ld",&banco[i].cpf);
		printf("Digite o valor que deseja depositar:\n");
		scanf("%f",&banco[i].valor);
	}
	while(flag!=0){
		printf("Digite o seu cpf:\n");
		scanf("%ld",&search);
		for(int i=0;i<3;i++){
			if(search==banco[i].cpf){
				aux = banco[i];
			}
		}
		printf("[1] saque\n");
		printf("[2] deposito\n");
		printf("[0] sair\n");
		scanf("%d",&opc);
		if(opc==1){
			int saque;
			printf("Digite o valor que deseja sacar:\n");
			scanf("%d",&saque);
			if(saque<aux.valor){
				aux.valor -= saque;
				printf("Sr(a) %s, o saldo atual da sua conta é R$ %.2f\n",aux.nome,aux.valor);
			}
		}else if(opc==2){
			int deposito;
			printf("Digite o valor que deseja depositar:\n");
			scanf("%d",&deposito);
			aux.valor += deposito;
			printf("Sr(a) %s, o saldo atual da sua conta é R$ %.2f\n",aux.nome,aux.valor);
		}else{
			flag = 0;
		}
	}
	return 0;
}
