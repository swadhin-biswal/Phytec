#include<stdio.h>
int main(){
    int a=10,b=6,result;
    result =(a>b) && a++;
    printf("%d",result);
    printf("%d",a);
    return 0;
}