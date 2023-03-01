#include<stdio.h>
#include<math.h>
int bo(int ,int ,int );
int main(){
    int x,y,z,d;
    printf("Give Input \n");
    scanf("%d%d%d",&x,&y,&z);
    d= bo(x,y,z);
    printf("the final value is%d\n",d);
    return 0;
}
int bo(int a,int b,int c)
{
    int s;
    s=(b+c);
    return pow(a,s);
}