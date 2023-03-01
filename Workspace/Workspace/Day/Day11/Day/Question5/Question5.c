#include<stdio.h>
int main(){
    void *p;
    int a=10;
    float b=11.2;
    char ch ='a';
    p=&a;
    printf("value a%d\n",(*(int*)p));
    p=&b;
    printf("value b%f\n",(*(float*)p));
    p=&ch;
    printf("value ch%c\n",(*(char*)p));
}