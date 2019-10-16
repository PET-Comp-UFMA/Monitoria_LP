#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char string[100];
	scanf("%[^\n]",string);
	int count=0,i=0;
	while(string[i]!='\0'){
		if(string[i]==' '){
			i++;
		}else{
			count++;
			i++;
		}
	}
	printf("%d",count);
}
