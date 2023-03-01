#include<stdio.h>
int main()
{
  int num1=0,num2=1,num3,i,num;
  printf("Enter the number of terms");
  scanf("%d",&num);
  printf("\n%d\n%d\n",num1,num2);
  for(i=3;i<=num;i++)
  {
    num3=num1+num2;
     printf("%d\n",num3);

    num1=num2;
    num2=num3;
   
  }
  return 0;
   
}