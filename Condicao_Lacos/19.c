#include <stdio.h>
#include <math.h>

int main(){
	int saque,cem=0,cinq=0,vit=0,dez=0,cinco=0,dois=0,um=0;
	scanf("%d",&saque);
	while(saque!=0){
		if(saque-100>=0){
			saque = saque-100;
			cem++;
		}else if(saque-50>=0){
			saque = saque-50;
			cinq++;
		}else if(saque-20>=0){
			saque = saque-20;
			vit++;
		}else if(saque-10>=0){
			saque = saque-10;
			dez++;
		}else if(saque-5>=0){
			saque = saque-5;
			cinco++;
		}else if(saque-2>=0){
			saque = saque-2;
			dois++;
		}else if(saque-1>=0){
			saque = saque-1;
			um++;
		}
	}
	printf("%d notas de cem\n%d notas de cinquenta\n%d notas de vinte\n%d notas de dez\n%d notas de cinco\n%d notas de dois\n%d notas de um",cem,cinq,vit,dez,cinco,dois,um);
}



