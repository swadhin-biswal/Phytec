#include<stdio.h>
int add(int ,int );
int min(int ,int );
int mul(int ,int );
int div(int ,int );
int mod(int ,int );

int main(){

     int a,b,sum,sub,into,by,per;
    
     int (*func)(int ,int);
      char l;
     printf("Enter the First value\n");
     scanf("%d",&a);
     printf("Enter the second\n");
     scanf("%d",&b); 
     printf("Enter the operator\n");
     scanf("%c",&l);
     if(l=='+'){
     func=&add;
     sum=(*func)(a,b);
     
     printf("The final sum:%d\n",sum);
     }
     else if(l=='-')
     {
     func= &min ;
     sub=(*func)(a,b);
     printf("The final min:%d\n",sub);
     }
     else if(l=='*')
     {
      func=&mul;
     into=(*func)(a,b);
     printf("The final into:%d\n",into);
     }
     else if(l=='/')
     {
     func=&div;
     by=(*func)(a,b);
     printf("The final by:%d\n",by);
     }
     else if(l=='%')
     {
     func=&mod;
     per=(*func)(a,b);
     printf("The final per:%d\n",per);
     }
     else{
        printf("Invalid Input");
     }
return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               

}
int add(int x,int y)
{
    return x + y;
}
int min(int x,int y)
{
    return x -y;
}
int mul(int x,int y)
{
    return x * y;
}
int div(int x,int y)
{
    return x / y;
}
int mod(int x,int y)
{
    return x % y;
}