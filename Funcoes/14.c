#include <stdio.h>
#include<stdlib.h>

// 4. Faça um programa que use a função valorPagamento para determinar o valor a ser pago por uma prestação de uma conta. 
//O programa deverá solicitar ao usuário o valor da prestação e o número de dias em atraso e passar estes valores para a função valorPagamento, 
//que calculará o valor a ser pago e devolverá este valor ao programa que a chamou. O programa deverá então exibir o valor a ser pago na tela. 
//Após a execução o programa deverá voltar a pedir outro valor de prestação e assim continuar até que seja informado um valor igual a zero para a prestação. 
//Neste momento o programa deverá ser encerrado, exibindo o relatório do dia, que conterá a quantidade e o valor total de prestações pagas no dia. 
//O cálculo do valor a ser pago é feito da seguinte forma. Para pagamentos sem atraso, cobrar o valor da prestação. Quando houver atraso, cobrar 3% de multa, mais 0,1% de juros por dia de atraso.

float valorPagamento(float valPrestacao, int diasAtraso){
  float multa;
  float juros;
  float pagar;

  if(diasAtraso != 0){
    multa = valPrestacao*0.3;
    juros = valPrestacao*0.1*diasAtraso;
    pagar = multa+juros + valPrestacao;
  }else{
    pagar = valPrestacao;
  }

  return pagar;
}

int main(){
  float valPrestacao = 1;
  int diasAtraso;
  float res;

  float valorTotal = 0;
  int count = 0;
  
  while(valPrestacao != 0){
    printf("Digite o valor da prestação: ");
    scanf(" %f" ,&valPrestacao);

    if(valPrestacao == 0){
      break;
    }

    printf("Digite os dias de atraso: ");
    scanf(" %d", &diasAtraso);
    
    res = valorPagamento(valPrestacao,diasAtraso);
    printf("%.2f\n",res);

    count++;
    valorTotal += res;
  }

  printf(".....RELATÓRIO DO DIA.....\n");
  printf("Quantidade de prestações pagas hoje: %d\n", count);
  printf("Valor total pago hoje: %.2f\n", valorTotal);
  

  return 0;
}

