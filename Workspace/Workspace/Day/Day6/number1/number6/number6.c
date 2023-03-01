#include<stdio.h>
int main(){
     int a,e,k,d,j,m,l,q,o,y;
     printf("Enter a numbers:\n");
    scanf("%d", &a);
    e=(1<<7);
    q=(1<<3);
   for (j=7; j>=0; j--)
    {
        k= (a>>j) & 1;
        m=(e>>j) & 1;
        l=(q>>j)& 1;
        d =k ^(m|l);
        printf("%d", d);
    }
    return 0;
}