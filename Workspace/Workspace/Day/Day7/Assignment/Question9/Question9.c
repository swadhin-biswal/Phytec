#include<stdio.h>
int main()
{
  int a,sum=1,i;
  printf("Enter the Number");
  scanf("%d",&a);
  for(i=1;i<=10;i++)
  {
    sum=a*i;
    printf("%d x %d = %d\n",a,i,sum);
  }

}