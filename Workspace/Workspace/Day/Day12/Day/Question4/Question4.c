#include<stdio.h>
int main(){

   int a[10]={1,2,3,4,5,6,7,8,9,10},i,*p;
   p=&a;
   for(i=0;i<10;i++)
   {
    printf("Before%d\n",a[i]);
   }
   printf("so Ans %x\n", (p+4));
   printf("so Ans %x\n", (p+2));
   printf("so Ans %x", ((p+4)-(p+2)));
}

