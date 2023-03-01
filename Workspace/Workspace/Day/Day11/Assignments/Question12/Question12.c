#include<stdio.h>
int main(void)
{
    int MAX, i, j, first5=0,last5=0;
    printf("Enter the size\n");
    scanf("%d", &MAX);
    int arr[MAX];
    printf("Enter the elements\n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < MAX; i++)
    {
        printf("%d\t", arr[i]);
    }
    for(i=0;i<5;i++)
    {
     first5=first5+arr[i];

    }
    for(i=0;i<5;i++)
    {
     last5=last5+arr[i];

    }
    if(first5==last5)
    {
        printf("\nTrue");
    }
    else{
        printf("\nFalse");
    }
}