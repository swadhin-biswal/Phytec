#include<stdio.h>
int main(){
    int a=4;
    float b=5.2;
    double d=18.21;
    char ch='a';
    int *p=&a;
    printf("Size of int %d\n",sizeof(p));
    *p=&b;
     printf("Size of float %d\n",sizeof(p));
     *p=&d;
      printf("Size of float %d\n",sizeof(p));
       *p=&ch;
      printf("Size of float %d\n",sizeof(p));
}