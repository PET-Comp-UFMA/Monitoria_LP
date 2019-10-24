#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int maior=0,count,i,j;
	char strings[1000],aux[100];
	scanf("%[^\n]",strings);
	printf("%s\n",strings);
	for(i=0;i<strlen(strings);){
		for(j=0;j<5;j++){
			aux[j] = strings[i];
			i++;
		}
		count = atoi(aux);
		printf("auxiliar: %d\n",count);
		if(count>maior){
			maior = atoi(aux);
		}else{
			count++;
		}
	}
	printf("maior numero: %d",maior);
}



