/*#include<stdio.h>
#include<math.h>
int main(){
    int x,y,d;
    printf("Give terms \n");
    scanf("%d",&x);
    printf("Give value\n");
    scanf("%d",&y);
    d=sub(x,y);
    printf("the final sum is%d\n",d);
    return 0;
}
int sub (int a ,int b)
{
    int i,add=0;
    for(i=1;i<=b;i++)
    {
       add+=1+(1/pow(a,i));
    }
    return add;
}