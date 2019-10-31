#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char string[1000],newString[1000],cont[10],var3[10];
	printf("Digite a frase:\n");
	scanf("%s",string);
	int count = 0,var1,var2;
	int j=0;

	for(int i=0;i<=strlen(string);i++){
		if(i!=0){
			if(string[i]==string[i-1]){
				count++;
			}else if(string[i]!=string[i-1] || string[i] =='\0'){
				newString[j] = string[i-1];
				j++;
				if(count<10){
					sprintf(cont,"%d",count);
					strcpy(&newString[j],cont);
					j++;
					count = 1;
				}else{
					var1 = count%10;
					var2 = var1%10;
					sprintf(var3,"%d",var1);
					strcpy(&newString[j],var3);
					j++;
					sprintf(var3,"%d",var2);
					strcpy(&newString[j],var3);
					j++;
					count = 1;
				}

			}
		}else{
			count++;
		}
	}
	printf("frase: %s\n",newString);
}


