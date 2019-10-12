#include <stdio.h>
#include <stdlib.h>

/*
3. Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu bilhete.
O programa então compara quantos números o jogador acertou. Em seguida, ele aloca espaços para um vetor de 
tamanho igual a quantidade de números corretos e guarda os números corretos nesse vetor. Finalmente, o programa 
exibe os números sorteados e os seus números corretos. 
*/

int main(){
	int cont = 0, k = 0;
	int* corretos;
	int* loteria = (int*)malloc(sizeof(int)*6);
	int* bilhete = (int*)malloc(sizeof(int)*6);
	printf("Digite os 6 numeros gerados pela loteria:\n");
	for(int i=0; i<6; i++){
		scanf("%d", &loteria[i]);
	}
	printf("Digite os 6 numeros do seu bilhete:\n");
	for(int i=0; i<6; i++){
		scanf("%d", &bilhete[i]);
	}

	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			if(bilhete[i] == loteria[j]){
				cont++;
				break;
			}
		}
	}
	corretos = (int*)malloc(sizeof(int)*cont);
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			if(bilhete[i] == loteria[j]){
				corretos[k] = bilhete[i];
				k++;
				break;
			}
		}
	}

	printf("Numeros sorteados: ");
	for(int i=0; i<6; i++){
		printf("%d ", loteria[i]);
	}
	printf("\nNumeros acertados: ");
	for(int i=0; i<cont; i++){
		printf("%d ", corretos[i]);
	}
	printf("\n");

	free(corretos);
	free(loteria);
	free(bilhete);

	return 0;
}