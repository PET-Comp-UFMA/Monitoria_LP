#include <stdio.h>
#include<math.h>//Biblioteca com funções matematicas

long fatExp(int n){
  long res=n;
  for(int i=n-1; i>0; i--){
    res = pow(res,i); //pow(variavel,expoente) potenciação
    printf("%ld\n",res);
  }
  return res;
}

int main(void) {
  int n=5;
  long res;
  res = fatExp(5);
  printf("%ld",res);

  return 0;
}