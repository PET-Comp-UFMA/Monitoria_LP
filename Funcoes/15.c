#include <stdio.h>
#include<stdlib.h>

float qntDigitos(int num){
  int count = 0;
  while(num != 0){
    num = num/10;
    count++;
  }
  return count;
}

int main(){
  int res;
  
  res = qntDigitos(0);
  printf("\n%d\n",res);

  return 0;
}
#include <stdio.h>
#include<stdlib.h>

// 5.Faça uma função que informe a quantidade de dígitos de um determinado número inteiro informado.

float qntDigitos(int num){
  int count = 0;
  while(num != 0){
    num = num/10;
    count++;
  }
  return count;
}

int main(){
  int num;
  int res;
  
  printf("Digite um número inteiro: ");
  scanf("%d",&num);
  res = qntDigitos(num);
  printf("\n%d\n",res);

  return 0;
}

