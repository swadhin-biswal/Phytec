#include<stdio.h>

int at(int a[])
{
    int i;
    for(i=0;i<=10;i++)
    {
    a[i]=a[i]+10;
    printf("After%d\n",a[i]);
    }
}
int main(){

   int a[10]={1,2,3,4,5,6,7,8,9,10},i;
   for(i=0;i<10;i++)
   {
    printf("Before%d\n",a[i]);
   }
   at(a);
}