#include<stdio.h>
int main(){
    int n,a,b;
printf("Give Input \n");
scanf("%d",&n);
a =cub(n);
b= tub(n);
return 0;
}
void nub()
{
   int x;
   printf("Enter the value:");
   scanf("%d",&x);
   printf("Value is:%d",x*x*x);
}
void fub(int x)
{
   printf("Value is:%d",x*x*x);
}
int cub(int x)
{
    return x*x*x;
}
int tub()
{
    int x;
    scanf("%d",&x);
    return x*x*x;
}