#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,i,k,m,n;
    printf("Enter the values:");
    scanf("%d%d%d",&a,&b,&c);
    i=(b*b)-(4*a*c);
    k=sqrt(i);
    m=(-b+k)/(2*a);
    n=(-b-k)/(2*a);
    printf("Roots are:%d,%d",&m,&n);



}