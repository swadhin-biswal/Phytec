#include<stdio.h>
int main(){
    int a;
    int *p=&a;
    printf("adress of a is %d",p);
    if(*p%sizeof(a)==0)
    {
    printf("\nAligned");
    }
    else
    {
        printf("Not aligned");
    }


}