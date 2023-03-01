#include<stdio.h>
#include"arith.h"
int main(){
	int p,b,h,s,c,t;
	printf("Give inputs:\n");
	scanf("%d%d%d",&p,&b,&h);
	s=sine(p,h);
	c=cose(b,h);
	t=tane(p,b);
	printf("Sin value for the given input is %d\n",s);
	printf("Cos value for the given input is %d\n",c);
	printf("Tan value for the given input is %d\n",t);
      return 0;
}
