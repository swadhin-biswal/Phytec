#include<stdio.h>
int main(){
 int a,b,c;
 printf("Ënter three values:");
 scanf("%d%d",&a,&b);
 if(a>b)
 {
    a=a+b;
    b= a-b;
    a=a-b;
    printf("The value of a and b are:%d and %d",a,b);
 }
 else
 {
    printf("Can't Predict for the given input value.");
 }
}