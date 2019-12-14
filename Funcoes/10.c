#include <stdio.h>
#include<stdlib.h>

struct Vetor{
  float x;
  float y;
  float z;
};

void soma(struct Vetor* v1, struct Vetor* v2, struct Vetor* res){
  res->x = v1->x + v2->x;
  res->y = v1->y + v2->y;
  res->z = v1->z + v2->z;

  printf("res=(%.1f,%.1f,%.1f)\n",res->x,res->y,res->z);
}

int main(void) {
  struct Vetor v1, v2, res;
  v1.x=1; v1.y=2; v1.z=3;
  v2.x=4; v2.y=5; v2.z=6;

  printf("v1=(%.1f,%.1f,%.1f)\n",v1.x,v1.y,v1.z);
  printf("v2=(%.1f,%.1f,%.1f)\n",v2.x,v2.y,v2.z);

  soma(&v1,&v2,&res);

  return 0;
}