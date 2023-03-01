#include<stdio.h>
#include<math.h>
int main(){
      int  a,b,c;
      double x1,x2;
      printf("Enter the Three values:\n");
      scanf("%d%d%d",&a,&b,&c);
      x1=(-b+sqrt(b*b-4*a*c))/(2*a);
      x2=(-b-sqrt(b*b-4*a*c))/(2*a);
      printf("The value of x1 is :%lf\n",x1);
      printf("The value of x2 is :%lf\n",x2);
      return 0;




}
