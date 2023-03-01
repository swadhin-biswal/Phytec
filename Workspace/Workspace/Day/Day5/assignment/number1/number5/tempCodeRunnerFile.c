#include<stdio.h>
int main(){
 int a,sum,d0,d1,d2,d3,d4;
 printf("Enter the number");
 scanf("%d",&a);
 d0=(a%10);
 a=a/10;
 d1=(a%10);
 a=a/10;
 d2=(a%10);
 a=a/10;
 d3=(a%10);
 a=a/10;
 sum =d1+a;
 printf("sum is:%d",sum);
 return 0;

 
