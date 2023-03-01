#include<stdio.h>
int main(){
        int a,i,j;
        printf("The binary value is:");
        scanf("%d",&a);
        for(i=7;i>=0;i--);
        {
          j=(a>>i) & 0x1;
          printf("%d",j);
        }
}   
   