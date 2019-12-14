#include <stdio.h>
#include<stdlib.h>

//Faça um programa com uma função chamada somaImposto. A função possui dois parâmetros formais: taxaImposto, 
//que é a quantia de imposto sobre vendas expressa em porcentagem e custo, que é o custo de um item antes do imposto. 
//A função “altera” o valor de custo para incluir o imposto sobre vendas.

float somaImpostos(float taxaImposto, float custo){
  float novoCusto;
  novoCusto = taxaImposto*custo+custo;
  return novoCusto;
}

int main(){
  float taxaImposto=0.05;
  float custo=50;
  float res;
  
  res = somaImpostos(taxaImposto,custo);
  printf("%f\n",res);

  return 0;
}