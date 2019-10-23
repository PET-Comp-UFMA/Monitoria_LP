#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char data[100];
	char vetor[100];
	int dia,mes,ano1,ano2,i,count=0;
	printf("Digite uma data:\n");
	scanf("%[^\n]",data);
	printf("%s\n",data);
	if(data[2]=='/' && data[5]=='/'){
		strcat(&data[0],&data[1]);
		dia = atoi(&data[0]);
		strcat(&data[3],&data[4]);
		mes = atoi(&data[3]);
		ano1 = data[6] - '0';
		ano2 = data[7] - '0';
		printf("ano: %d %d\n",ano1,ano2);
	}
	printf("dia: %d\nmes: %d\nano: %d%d\n",dia,mes,ano1,ano2);
}



