#include<stdio.h>
#include<stdlib.h>

int calc(int num1 ,int num2 , char c){
	int res;
	if(c == '+'){
		res = num1 + num2;
	}else{
		if(c == '-'){
			res = num1 - num2;
		}else{
			if(c == '/'){
				res = num1/num2;
			}else{
				if(c == '*'){
					res = num1*num2;
				}
			}
		}
	}
	return res;
}

int main(){
	int n1,n2;
	char c;
	int res;

	printf("Digite dois numeros e uma operação: ");
	scanf("%d %d %c",&n1,&n2,&c);
	res = calc(n1,n2,c);
	printf("%d\n", res);
}