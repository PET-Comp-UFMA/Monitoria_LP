#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str1[100];
	char str2[100];
	char str3[100];
	int n,count=0;
	int tam;
	printf("Digite a primeira string.\n");
	scanf("%[^\n]",str1);
	setbuf(stdin,NULL);
	printf("Digite a segunda string.\n");
	scanf("%[^\n]",str2);
	printf("Digite um número.\n");
	scanf("%d",&n);
	strncpy(str3, str2, n);
	int j=0;
	for(int i=0;i<n;i++){
		str1[strlen(str1)+i] = str3[j];
		j++;
	}
	str1[strlen(str1)+n]='\0';
	for(int i=0;i<=strlen(str1)+n;i++){
		printf("%c",str1[i]);
	}
}



