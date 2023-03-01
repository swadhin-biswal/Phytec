#include<stdio.h>
int main(){
 int a;
 printf("Enter the Year");
 scanf("%d",&a);
if(a%4==0)
{
    printf("Leap Year");
}
else
{
    printf("not a leap year");
}
return 0;


}