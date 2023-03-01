#include<stdio.h>
int main(){
     int a,sum,d1,d2,d3;
     printf("Enter you Number:");
     scanf("%d",&a);
     d1=a%10;
     a=a/10;
     d2=a%10;
     a=a/10;
     sum=d1+d2+a;
     printf("Sum is:%d",sum);
 return 0;


}