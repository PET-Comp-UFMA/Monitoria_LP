#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int ultPosicao(char *nome){
	int i=0;
	while(nome[i]!='\0'){
		if(nome[i]=='A' || nome[i]=='a'){
			nome[i] = '*';
		}
		i++;
	}
	return i;
}

int main(){
	char string[100];
	scanf("%[^\n]",string);
	int ult = ultPosicao(string);
	for(int i=ult;i>=0;i--){
		printf("%c",string[i]);
	}
}

