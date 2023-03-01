#include<stdio.h>
int main(int argc,char *argv[])
{   
    int sum=0,i,n,count;
    for(i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        sum+=n;
    }
    printf("sum is %d\n",sum);
    printf("%s\n",argv[0]);
    printf("%d\n",argc);
    printf("%d",argv[1]);
    for(i=1;i<argv[i];i++)
    {
        count++;
    }
    printf("%d",count);
}