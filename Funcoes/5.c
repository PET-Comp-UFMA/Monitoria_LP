#include<stdio.h>
#include<stdlib.h>

void piramide(int n){
	int count;
	int esp;

	for(int linha=1; linha<=n; linha++){
		count = 2*linha-1;
		esp = ((2*n)/2)-linha;
		for(int j=esp; j>0; j--){
				printf(" ");
			}
		for(int i=count; i>0; i--){
			printf("*");
		}

		printf("\n");
	}
}

int main(){
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	piramide(num);
}