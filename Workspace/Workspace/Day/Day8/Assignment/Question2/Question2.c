#include<stdio.h>
int main(){
	int p1,p2,p3,r1,r2,r3,t1,t2,t3;
    float v1,v2,v3;
	printf("Give Input \n");
	scanf("%d%d%d%d%d%d%d%d%d",&p1,&r1,&t1,&p2,&r2,&t2,&p3,&r3,&t3);
    v1=sim(p1,r1,t1);
    v2=sim(p2,r2,t2);
    v3=sim(p3,r3,t3);
    printf("Interest of first person%.2f\n",v1);
    printf("Interest for second person%.2f\n",v2);
    printf("Interest for Third person%.2f\n",v3);
    return 0;
}
int sim(int x,int y ,int z)
{
    float v;
    v = (x*y*z)/100;
    return v;
}
	