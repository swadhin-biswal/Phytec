#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9},*p,i;
    p=&a;
     for(i=0;i<=10;i++)
     {
        printf("value of a %d from %p\n",a[i],&a[i]);
     }
        for(i=0;i<10;i++)
        {
            printf("%d\n",*(p+i));
        }
}