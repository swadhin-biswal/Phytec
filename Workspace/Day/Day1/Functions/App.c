#include<stdio.h>
#include"det.h"
int main(){
	int num1,num2,a,s,m,d,p;
	printf("Give Input \n");
	scanf("%d%d",&num1,&num2);
	a=sum(num1,num2);
	s=dif(num1,num2);
	m=mul(num1,num2);
	d=div(num1,num2);
	p=mod(num1,num2);
	printf("Addition of two numbers is:%d\n",a);
        printf("Subtraction of two numbers is:%d\n",s);
        printf("Multiplication of two numbers is:%d\n",m);
        printf("Divison of two numbers is:%d\n",d);
	printf("Modulos of two numbers is:%d\n",p);
	printf("Am happy\n");
	return 0;
}
