#include<stdio.h>
int main(){
    float w1,n1,w2,n2,t;
  printf("Enter the value:");
  scanf("%f%f%f%f",&w1,&n1,&w2,&n2);
  t=((w1*n1)+(w2*n2))/(n1+n2);
  printf("Average Value:%f",t);
  return 0;
}