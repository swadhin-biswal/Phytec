#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("value ofp is %x\n",p);
    printf("value of p++ %x\n",++p);
    float b=10.5;
    float *q=&b;
    printf("value of q is %x\n",q);
    printf("value of q++ %x\n",++q);
    char ch='k';
    char *d=&ch;
    printf("value of d is %x\n",d);
    printf("value of d++ %x\n",++d);

}