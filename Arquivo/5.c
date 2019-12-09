#include<stdio.h>
#include<stdlib.h>

//5. Faça um programa que recebe um vetor de 10 números, 
//converta cada um desses números para binário e grave a sequência de 0s e 1s em um arquivo texto. 
//Cada número deve ser gravado em uma linha. 

void ArquivoBinario(int*num){

	int bin[7];
    int aux;

    FILE *pont_arq;
    pont_arq = fopen("5arquivo.txt","w");
    
    for(int i=0; i<10; i++){
		for (aux = 7; aux >= 0; aux--) {
	    	if (num[i] % 2 == 0) {
	        	bin[aux] = 0;
	        	num[i] = num[i] / 2;
	        }
	        else {
	            bin[aux] = 1;
	            num[i] = num[i] / 2;
	        }
	    }

	    for (aux = 0; aux <= 7; aux++) {
	        fprintf(pont_arq, "%d", bin[aux]);
	    }
	fprintf(pont_arq, "\n" );
	}

	fclose(pont_arq);
}

int main(){
	int vetor[10];

	printf("insira 10 numeros, um de cada vez:\n");
	for(int i=0; i<10; i++){
		scanf("%d", &vetor[i]);
	}
    ArquivoBinario(vetor);

	return 0;
}