#include<stdio.h>
int main(){
  int num1,num2,q,r;
  printf("Enter the num1:\n");
  scanf("%d",&num1);
  printf("Enter the num2\n:");
 scanf("%d",&num2);
 q=num1/num2;
 r=num1%num2;
  printf("The Quotient is:%d",q);
  printf("The Remainder is %d",r);
  return 0;

}