#include<stdio.h>
int main(){
 int a,b,c;
 printf("Ënter three values:");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
    if(a>c)
    {
        printf("A is the greatest among the three:%d",a);
    }
    else
    {
        printf("C is the greatest among the three:%d",c);
    }
 }
 else if(b>c)
    {
       printf("B is the greatest among the three:%d",b);  

    }
else
{
    printf("Cis the greatest.%d",c);
 }
}