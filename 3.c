#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*3. Escrever um programa que leia ‘n’ pontos. Em seguida imprima qual o ponto mais próximo do primeiro ponto lido.
*/

typedef struct{
	int x;
	int y;
}Ponto;

int main(){
	int n,menor,px,py,aux;
	printf("Digite a quantidade de pontos:\n");
	scanf("%d",&n);
	Ponto pontos[n];
	printf("Digite o ponto x:\n");
	scanf("%d",&pontos[0].x);
	printf("Digite o ponto y:\n");
	scanf("%d",&pontos[0].y);
	for(int i=1;i<n;i++){
		printf("Digite o ponto x:\n");
		scanf("%d",&pontos[i].x);
		printf("Digite o ponto y:\n");
		scanf("%d",&pontos[i].y);
		aux = sqrt((pontos[i].x-pontos[0].x)^2+(pontos[i].y-pontos[0].y)^2); 
		if(aux<menor){
			px = pontos[i].x;
			py = pontos[i].y;
			menor = aux;
		}
	}
	printf("O ponto com menor distância é x:%d e y:%d\n",px,py);

	return 0;
}
