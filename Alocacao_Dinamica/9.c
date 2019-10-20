#include <stdio.h>
#include <stdlib.h>

/*
9. Faça um programa que receba do usuário o tamanho de uma string e chame uma função
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo
dessa string. O programa imprime a string sem suas vogais. 
*/

int main(){
	char* string;
	int n;

	printf("Digite o tamanho e depois a string: ");
	scanf("%d ", &n);
	fflush(stdin);
	string = (char*)malloc(sizeof(char)*n);	
	scanf("%[^\n]", string);

	printf("Sua string sem vogais eh:\n");
	for(int i=0; i<n; i++){
		if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' ||
			string[i] == 'a' || string[i] == 'e' ||string[i] == 'i' ||string[i] == 'o' ||string[i] == 'u'){
			continue;
		}
		printf("%c", string[i]);
	}
	printf("\n");
	free(string);
	return 0;
}