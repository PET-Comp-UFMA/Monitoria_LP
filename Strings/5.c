#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char nome[100],nomeMenor[100],nomeMaior[100];
	int idade,i=0,maior=0,menor=300;
	while(i<10){
		printf("nome\n");
		scanf("%s",nome);
		printf("idade\n");
		scanf("%d",&idade);
		if(idade<0){
			break;
		}
		if(idade<menor){
			menor = idade;
			printf("Nova idade menor %d", menor);
			strcpy(nomeMenor,nome);
		}
		if(idade>maior){
			maior = idade;
			printf("Nova idade maior %d", maior);
			strcpy(nomeMaior,nome);
		}
		i++;
	}
	printf("Mais Jovem: %s %d\n",nomeMenor,menor);
	printf("Mais Velha: %s %d\n",nomeMaior,maior);
}



