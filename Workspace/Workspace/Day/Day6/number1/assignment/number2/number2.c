#include<stdio.h>
int main(){
     int a,e,i,k,d,j,s=1,m;
     printf("Enter a numbers:\n");
    scanf("%d", &a);
    e=(s<<2);
   
    for (j=7; j>=0; j--)
    {
        k= (a>>j) & 1;
        m=(e>>j) & 1;
        d=k|m;
        printf("%d", d);
    }
    return 0;
}