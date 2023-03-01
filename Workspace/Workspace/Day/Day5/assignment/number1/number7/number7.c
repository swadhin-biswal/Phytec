#include<stdio.h>
int main(){
   int a,b,c,sum;
   printf("The value is:");
   scanf("%d",&a);
   b=a%10;
   a=a/10;
   c=a%10;
   a=a/10;
   sum=b*100+c*10+a;
   printf("The sum is:%d",sum);
   return 0;

}