#include<stdio.h>
int main(){
int i;
printf("Even Number Between 1 to 50:");
for (i=0;i<=50;i++)
{
    if(i%2==0){
        printf("%d\n",i);
    }
}
return 0;
}