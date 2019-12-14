#include <stdio.h>
#include<stdlib.h>

//Faça um programa, com uma função que necessite de um argumento. A função retorna o valor de caractere ‘P’, 
//se seu argumento for positivo, e ‘N’, se seu argumento for zero ou negativo.

char posNeg(int n){
  if(n>0){
    return 'P';
  }else{
    return 'N';
  }
}

int main(void) {
  char res;

  res = posNeg(5);
  printf("%c\n", res);

  res = posNeg(-3);
  printf("%c\n", res);

  return 0;
}