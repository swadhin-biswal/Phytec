#include<stdio.h>
int main(){
    int nd,years,months,days;
    printf("Enter no days");
    scanf("%d",&nd);
    years = nd/365;
    months =(nd%365)/30;
    days=(nd%365)%30;
    printf("%d\n%d\n%d\n",years,months,days); 

}