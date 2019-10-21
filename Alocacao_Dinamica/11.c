#include <stdio.h>
#include <stdlib.h>

/*
11. Dado 3 matrizes, A, B, e C, de tamanhos informados pelo usuário, e de valores também informados
pelo usuário, escreva um programa, com o uso de funções, que multiplique as matrizes. Ao final, 
apresente o resultado na tela. O resultado deve ser R = A * B * C
*/

void multiplicaMat(int** mat_A, int a1, int a2, int** mat_B, int b1, int b2, int** mat_R){
	int c = a2; //quantas vezes o 3o laço será repetido -> a2 == b1

    for(int i=0; i<a1; i++){
    	for(int j=0; j<a2; j++){
	        for(int k=0; k<c; k++){
	            mat_R[i][j] += mat_A[i][k] * mat_B[k][j];
	        }
      	}
    }
	
}

int main(){
	int **mat_A, **mat_B, **mat_C, **mat_R1, **mat_R2;
	int a1, a2, b1, b2, c1, c2;

	printf("Digite as dimensoes da matriz A:\n"); //a2 == b1, r1 = a1 x b2
	scanf("%d\n%d", &a1, &a2);

	printf("Digite as dimensoes da matriz B:\n");
	scanf("%d\n%d", &b1, &b2);

	printf("Digite as dimensoes da matriz C:\n"); //b2 == c1, r2 = a1 x c2
	scanf("%d\n%d", &c1, &c2);


	if(a2 == b1 && b2 == c1){
		//alocando a matriz R1
		mat_R1 = (int**)malloc(sizeof(int*)*a1);
		for(int i=0; i<a1; i++){
			mat_R1[i] = (int*)malloc(sizeof(int)*b2);
		}

		//alocando a matriz R2
		mat_R2 = (int**)malloc(sizeof(int*)*a1);
		for(int i=0; i<a1; i++){
			mat_R2[i] = (int*)malloc(sizeof(int)*c2);
		}

		//alocando e recebendo valores da matriz A
		mat_A = (int**)malloc(sizeof(int*)*a1);
		for(int i=0; i<a1; i++){
			mat_A[i] = (int*)malloc(sizeof(int)*a2);
		}

		printf("Digite os valores da matriz A:\n");
		for(int i=0; i<a1; i++){
			for(int j=0; j<a2; j++){
				printf("a%d%d: ", i, j);
				scanf("%d", &mat_A[i][j]);
			}
		}

		//alocando e recebendo valores da matriz B
		mat_B = (int**)malloc(sizeof(int*)*b1);
		for(int i=0; i<b1; i++){
			mat_B[i] = (int*)malloc(sizeof(int)*b2);
		}

		printf("Digite os valores da matriz B:\n");
		for(int i=0; i<b1; i++){
			for(int j=0; j<b2; j++){
				printf("b%d%d: ", i, j);
				scanf("%d", &mat_B[i][j]);
			}
		}

		//alocando e recebendo valores da matriz C
		mat_C = (int**)malloc(sizeof(int*)*c1);
		for(int i=0; i<c1; i++){
			mat_C[i] = (int*)malloc(sizeof(int)*c2);
		}

		printf("Digite os valores da matriz C:\n");
		for(int i=0; i<c1; i++){
			for(int j=0; j<c2; j++){
				printf("c%d%d: ", i, j);
				scanf("%d", &mat_C[i][j]);
			}
		}
		multiplicaMat(mat_A, a1, a2, mat_B, b1, b2, mat_R1);
		multiplicaMat(mat_R1, a1, b2, mat_C, c1, c2, mat_R2);

		printf("A matriz resultante eh:\n");
		for(int i=0; i<a1; i++){
			for(int j=0; j<c2; j++){
				printf("%d ", mat_R2[i][j]);
			}
			printf("\n");
		}



	}else{
		printf("Impossivel realizar multiplicacao.\n");
	}

	return 0;
}