#include<stdio.h>
int main(){
     int a,e,i,k,d,j,s=1,m,r=1,l,u,f,g;
     printf("Enter a numbers:\n");
    scanf("%d", &a);
    e=(s<<5);
   for (j=7; j>=0; j--)
    {
        k= (a>>j) & 1;
        m=(e>>j) & 1;
        l=(r>>j)& 1;
        d =k^(m|l);

        printf("%d", d);
    }
    return 0;
}