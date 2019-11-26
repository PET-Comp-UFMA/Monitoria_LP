#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*4. Escrever um programa que cadastre vários produtos. Em seguida, imprima uma lista com o código e nome da cada produto. Por último, consulte o preço de um produto através de seu código.
*/

typedef struct{
	long int codigo;
	char nome[20];
	float preco;
}Produto;

int main(){
	int n;
	long int search;
	printf("Digite a quantidade de produtos que deseja cadastrar:\n");
	scanf("%d",&n);
	Produto mercado[n];
	for(int i=0;i<n;i++){
		printf("Digite o nome do produto:\n");
		scanf("%s",mercado[i].nome);
		printf("Digite o codigo do produto:\n");
		scanf("%ld",&mercado[i].codigo);
		printf("Digite o preço do produto:\n");
		scanf("%f",&mercado[i].preco);
	}
	for(int i=0;i<n;i++){
		printf("Nome do produto:%s\n",mercado[i].nome);
		printf("Codigo do produto:%ld\n",mercado[i].codigo);
		printf("Preço do produto:%.2f\n",mercado[i].preco);
	}

	printf("Digite o codigo do produto que deseja procurar:\n");
	scanf("%ld",&search);
	for(int i=0;i<n;i++){
		if(search==mercado[i].codigo){
			printf("Nome do produto:%s\n",mercado[i].nome);
			printf("Codigo do produto:%ld\n",mercado[i].codigo);
			printf("Preço do produto:%.2f\n",mercado[i].preco);
			break;
		}
	}
	return 0;
}
