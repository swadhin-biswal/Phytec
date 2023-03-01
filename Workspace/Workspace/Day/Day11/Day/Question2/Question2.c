#include<stdio.h>
int swap(int *,int *);
int main(){
     int a,b;
     printf("Enter the First value\n");
     scanf("%d",&a);
     printf("Enter the second\n");
     scanf("%d",&b); 
     swap(&a,&b);
     printf("The final swap:%d\n",a);
     printf("The final swap:%d\n",b);
return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               

}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return *x,*y;
}