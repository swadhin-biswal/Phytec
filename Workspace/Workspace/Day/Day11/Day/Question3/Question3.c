#include<stdio.h>
int add(int *,int *);
int min(int *,int *);
int mul(int *,int *);
int div(int *,int *);
int mod(int *,int *);
int main(){
     int a,b,sum,sub,into,by,per;
     printf("Enter the First value\n");
     scanf("%d",&a);
     printf("Enter the second\n");
     scanf("%d",&b); 
     sum=add(&a,&b);
     printf("The final sum:%d\n",sum);
     sub=min(&a,&b);
     printf("The final min:%d\n",sub);
     into=mul(&a,&b);
     printf("The final into:%d\n",into);
     by=div(&a,&b);
     printf("The final by:%d\n",by);
     per=mod(&a,&b);
     printf("The final per:%d\n",per);
return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               

}
int add(int *x,int *y)
{
    return *x +*y;
}
int min(int *x,int *y)
{
    return *x -*y;
}
int mul(int *x,int *y)
{
    return *x * *y;
}
int div(int *x,int *y)
{
    return *x / *y;
}
int mod(int *x,int *y)
{
    return *x % *y;
}