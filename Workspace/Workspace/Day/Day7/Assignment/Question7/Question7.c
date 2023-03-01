#include<stdio.h>
int main(){
  int a,sum=0,i;
  printf("Enter the range");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    sum=sum+i;
  }
printf("Sum of all the natural number is %d\n",sum);


}