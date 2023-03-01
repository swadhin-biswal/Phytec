#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("Give Input \n");
    scanf("%d%d",&l,&b);
    a=area(l,b);
    p=peri(l,b);
   printf("Area %d\n",a);
   printf("Perimeter %d\n",p);
    return 0;
}
int area(int x,int y)
{
    return x*y;
}
int peri(int a,int b)
{
    return 2*(a+b);
}