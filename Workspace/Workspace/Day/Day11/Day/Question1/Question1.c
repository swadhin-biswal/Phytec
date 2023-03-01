#include<stdio.h>
int add(int *,int *);
int main(){
     int a,b,sum;
     printf("Enter the First value\n");
     scanf("%d",&a);
     printf("Enter the second\n");
     scanf("%d",&b); 
     sum=add(&a,&b);
     printf("The final sum:%d\n",sum);
return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               

}
int add(int *x,int *y)
{
    return *x +*y;
}