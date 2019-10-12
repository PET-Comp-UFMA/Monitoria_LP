#include <stdio.h>
#include <math.h>
//10. Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem ˆ (0, 0).

int main(void){
    float x, y, distancia;
    scanf("%f %f",&x,&y);
    printf("X: %f \nY: %f \n", x, y);
    distancia = sqrt(pow(x-0, 2)+pow(y-0,2));
    printf("Distancia: %f \n",distancia);
    return 0;
}