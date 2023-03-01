#include<stdio.h>
int main(){
     int num1,num2,res;
     printf("Enter the Numbers:");
     scanf("%d%d",&num1,&num2);
     res=num1;
     num1=num2;
     num2=res;
     printf("The Output is %d",num2);
printf("The Output is %d",num1);

}