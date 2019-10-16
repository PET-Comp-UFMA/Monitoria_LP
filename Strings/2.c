#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char string[100];
	scanf("%s",string);
	if(string[0]=='a'){
		printf("Nome: %s",string);
	}else{
		printf("Não começa com a");
	}
}

