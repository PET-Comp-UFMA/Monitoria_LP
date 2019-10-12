//17. Escreva um algoritmo que retorna uma pirâmide com a quantidade de linhas indicadas pelo usuário.

#include <stdio.h>

int main(){
	int linhas, num = 1, espacos;
	printf("Digite o numero de linhas da piramide:\n");
	scanf("%d", &linhas);
	espacos = linhas-1;
	for(int i=0; i<linhas; i++){
		for(int k = espacos; k>0; k--){
			printf(" ");
		}
		espacos--;
		for(int j=0; j<i; j++){
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}

	return 0;
}