#include<stdio.h>
int count()
{
   static int count=0;
    count ++;
   // printf("%d\n",count);
    printf("%d\n",&count);

}
int main(){
    count();
    count();
    count();
    count();
}
