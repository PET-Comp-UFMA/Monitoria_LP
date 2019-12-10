#include<stdio.h>
#include<stdlib.h>

int segundos(int hrs, int min, int seg){
	int res;
	res = hrs*3600 + min*60 + seg;
	return res;
}

int main(){
	int resposta;
	int a,b,c;
	printf("Digite tres numeros: \n");
	scanf("%d %d %d", &a,&b,&c);
	resposta = segundos(a,b,c);
	printf("%d hora %d minutos e %d segundos = %d\n",a,b,c,resposta);
	
}