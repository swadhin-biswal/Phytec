#include<stdio.h>
int main()
{
  int num1,num2,gcd,count=0,small;
  printf("Enter the numbers:");
  scanf("%d%d",&num1,&num2);
  small=(num1>num2)?num1:num2;
  while(count<=small)
  {
    if(num1%count==0 && num2%count==0)
    {
        gcd=count;
        
        
    }
    count++;
   printf("value is %d",gcd);
  }
  
  return 0;

}
