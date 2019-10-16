#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int count,i=0,tam;
	char string[100];
	scanf("%[^\n]", string);//lê até o \n
	while(string[i]!='\0'){
		count++;
		i++;
	}
	printf("%d",count);
}
