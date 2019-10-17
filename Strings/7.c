#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char A[100];
	char B[100];
	char *res;
	int count=0;
	printf("Digite A:\n");
	scanf("%[^\n]",A);
	setbuf(stdin,NULL);
	printf("Digite B:\n");
	scanf("%[^\n]",B);
	res = strstr(B,A);
	while(res!=NULL){
		count++;
		res = strstr(res+1,A);
	}
	printf("%d",count);
}


