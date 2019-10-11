#include <stdio.h>
#include <math.h>

int main(){
	int n,qtd=1,num=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<qtd;j++){
			printf("%d ",num);
			num++;
		}
		qtd++;
	}
}
