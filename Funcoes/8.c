#include <stdio.h>
#include<stdlib.h>

//Faça uma função que recebe, por parâmetro, uma matriz A[3][3] e retorna a soma dos elementos da sua diagonal principal e da sua diagonal secundária.

void somaDasDiag(int A[3][3]){
  int princ=0;
  int sec=0;

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){ 
      if(i == j){ //se i e j forem iguais 
        princ = A[i][j] + princ;
      }
      if((i + j) == 2){ // se i+j for igual a 3-1 (quantidades de linhas e colunas que nesse caso é 3, menos 1)
        sec = A[i][j] + sec;
      }
    }
  }

  printf("\nSoma dos elementos da diagonal principal: %d", princ);
  printf("\nSoma dos elementos da diagonal secundária: %d", sec);

}

int main(void) {
  int matriz[3][3];
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      matriz[i][j] = rand()%10;
      printf("%d ",matriz[i][j]);
    }
    printf("\n");
  }
  
  somaDasDiag(matriz);


  return 0;
}