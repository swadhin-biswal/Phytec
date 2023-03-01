#include<stdio.h>
int main()
{
  int a,sum=1,i;
  printf("Enter the Number");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    sum=sum*i;
  }
printf("factorials %d\n",sum);
}