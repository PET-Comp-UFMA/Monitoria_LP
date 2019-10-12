#include <stdio.h>
//Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.

int main(){
	char letra_M, letra_m;
	printf("Digite uma letra maiuscula para converte-la em minuscula:\n");
	scanf("%c", &letra_M);
	letra_m = letra_M + 32;
	printf("Letra convertida em minuscula: %c\n", letra_m);

	return 0;
}