#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char aux[20];
	int n;

	printf("Digite a quantidade de palavras:\n");
	scanf("%d",&n);
	char nm[n][20];

	for (int i = 0; i < n; i++) {
   		printf("\nNome %i: ", i+1);
   		scanf("%s", nm[i]);
	}


	for (int i = 1; i <= n; i++) { /* n = qtde de palavras */
   		for (int j = 1; j < n; j++) {
      	// verifica se tem que ser depois, se for troca de posição
      		if (strcmp(nm[j - 1], nm[j]) > 0) {
         		strcpy(aux, nm[j - 1]);
         		strcpy(nm[j - 1], nm[j]);
         		strcpy(nm[j], aux);
      		}
   		}
	}

	// só mostrar a matriz
	for (int i = 0; i < n; i++){
   		printf("\n%s", nm[i]);
	}
}




