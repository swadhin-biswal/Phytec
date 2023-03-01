#include<stdio.h>
#include"det.h"
int main(){
	int mark1,mark2,mark3,mark4,mark5,m,e,p,c,b;
	printf("Give Input \n");
	scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);
	m=math(mark1);
	e=english(mark2);
	p=physics(mark3);
	c=chemistry(mark4);
	b=biology(mark5);
	printf("Grade in maths:%d\n",m);
    printf("Grade in english:%d\n",e);
    printf("Grade in  physics:%d\n",p);
    printf("Grade in chemistry:%d\n",c);
	printf("Grade in biology:%d\n",b);
	return 0;
}