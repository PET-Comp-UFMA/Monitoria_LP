#include <stdio.h>
#include <math.h>

int main(){
	int soma1=0,soma2=0,total;
	for(int i=1;i<=10;i++){
		soma2 = soma2+i;
		soma1 = soma1+(i*i);
	}
	soma2 = soma2*soma2;
	total = soma2-soma1;
	printf("%d",total);	
}
