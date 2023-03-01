#include<stdio.h>
int main(){
     int a,e,i,k,d,j,s=1,m,r,l,u,f,g,q,c=1,o,y;
     printf("Enter a numbers:\n");
    scanf("%d", &a);
    e=(s<<4);
    q=(c<<3);
   for (j=7; j>=0; j--)
    {
        k= (a>>j) & 1;
        m=(e>>j) & 1;
        l=(q>>j)& 1;
        d =k |(m|l);


        printf("%d", d);
    }
    return 0;
}