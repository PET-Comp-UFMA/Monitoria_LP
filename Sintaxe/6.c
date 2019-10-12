#include <stdio.h>
//6. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.

int main(void){
    float salario;
    float porcentagem;

    printf("Digite o valor do salário: ");
    scanf("%f", &salario);
    printf("Digite a porcentagem de aumento: ");    
    scanf("%f", &porcentagem);


    float aumento = salario * (porcentagem/100);
    float novo_sal = salario + aumento;

    printf("\nAumento: %.2f \nSalario: %.2f",aumento, novo_sal);
}