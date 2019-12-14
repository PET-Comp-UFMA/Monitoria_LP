#include <stdio.h>
#include<stdlib.h>

struct Ponto{
  int x;
  int y;
};

int dentroRet(struct Ponto *v1, struct Ponto*v2, struct Ponto*p){
  if(p->x > v1->x && p->x < v2->x){
    if(p->y > v1->y && p->y < v2->y){
      return 1;
    }
  }
  return 0;
}

int main(void) {
  struct Ponto v1, v2, p1, p2;  
  v1.x = 1; v1.y = 1; //v1 = (1,1)
  v2.x = 5; v2.y = 3; //v2 = (5,3)
  p1.x = 2; p1.y = 2;   //p1 = (2,2) dentro do retangulo
  p2.x = 2; p2.y = 5;   //p1 = (2,5) fora do retangulo

  int res;
  res = dentroRet(&v1 ,&v2, &p1);
  printf("ponto p=(2,2): %d\n",res);
  res = dentroRet(&v1 ,&v2, &p2);
  printf("ponto p=(2,5): %d\n",res);



  return 0;
}