#include<stdio.h>
int main(){
    int a,b;
    printf("Ënter the number:");
    scanf("%d",&a);
    b=5;
    printf("%d",sizeof(a%5)?b:a);
}