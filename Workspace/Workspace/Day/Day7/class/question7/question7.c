#include<stdio.h>
int main(){
    char a,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday;
    printf("Enter the Day:");
    scanf("%d",&a);
    if(a=Monday)
    {
        printf("41.2");
    }
    else if (a=Tuesday)
    {
        printf("35.1");
    }
    else if (a=Wednesday)
    {
        printf("39.6");
    }
    else if (a=Thursday)
    {
        printf("22.3");
    }
    else if (a=Friday)
    {
        printf("28.5");
    }
    else if (a=Saturday)
    {
        printf("16.2");
    }
    else if (a=Sunday)
    {
        printf("44.5");
    }
    else{
        printf("Invlid Input");
    }


}